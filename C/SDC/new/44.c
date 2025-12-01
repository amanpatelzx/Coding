/*
 * 4-Way Smart Traffic Light Controller for ESP32
 * * Priorities:
 * 1. Ambulance (Button)
 * 2. Density (Potentiometer)
 * 3. Human (IR Sensor / Button)
 * 4. Default Cycle
 *
 * NOTE: For Proteus simulation:
 * - Use POT-HG for Ultrasonic sensors (connect wiper to Analog pin)
 * - Use LOGICSTATE or BUTTON for IR sensors (connect to Digital pin)
 * - Use BUTTON for Ambulance triggers (connect to Digital pin)
 */

// === PIN DEFINITIONS ===

// Lane 1 Pins
const int L1_RED = 23;
const int L1_YELLOW = 22;
const int L1_GREEN = 21;
const int L1_BLUE = 19;
const int L1_ULTRA = 34; // Analog In
const int L1_IR = 5;
const int L1_AMBULANCE = 1; // TX0

// Lane 2 Pins
const int L2_RED = 13;
const int L2_YELLOW = 12;
const int L2_GREEN = 14;
const int L2_BLUE = 4;
const int L2_ULTRA = 35; // Analog In
const int L2_IR = 17;
const int L2_AMBULANCE = 3; // RX0

// Lane 3 Pins
const int L3_RED = 33;
const int L3_YELLOW = 32;
const int L3_GREEN = 25;
const int L3_BLUE = 16;
const int L3_ULTRA = 39; // Analog In
const int L3_IR = 2;
const int L3_AMBULANCE = 10;

// Lane 4 Pins
const int L4_RED = 27;
const int L4_YELLOW = 26;
const int L4_GREEN = 15; // Also used for Buzzer
const int L4_BLUE = 18;
const int L4_ULTRA = 36; // Analog In
const int L4_IR = 0;
const int L4_AMBULANCE = 9;

// Buzzer Pin (Shared with L4_GREEN for this example, use a different pin if available)
const int BUZZER = 15; 

// === TIMING & THRESHOLD CONSTANTS ===
const int yellowTime = 3000;       // 3 seconds
const int allRedTime = 1000;         // 1 second
const int defaultGreenTime = 10000;  // 10 seconds
const int densityGreenTime = 15000;  // 15 seconds (longer green for density)
const int humanGreenTime = 8000;     // 8 seconds (green for human)

// This is the "4 minutes" you requested. Set to 20 seconds (20000) for testing.
// For 4 minutes, use 240000.
const long ambulanceTime = 20000; 

// Density threshold. Analog read is 0-4095.
// We assume 0 = max density (car right at sensor), 4095 = empty.
// So, a value below this threshold means high density.
const int DENSITY_THRESHOLD = 1000; // Adjust this value based on your simulation

void setup() {
  Serial.begin(115200);

  // Set all LED & Buzzer pins as OUTPUT
  int outputs[] = {
    L1_RED, L1_YELLOW, L1_GREEN, L1_BLUE,
    L2_RED, L2_YELLOW, L2_GREEN, L2_BLUE,
    L3_RED, L3_YELLOW, L3_GREEN, L3_BLUE,
    L4_RED, L4_YELLOW, L4_GREEN, L4_BLUE,
    BUZZER
  };
  for (int pin : outputs) {
    pinMode(pin, OUTPUT);
  }

  // Set all IR & Ambulance pins as INPUT_PULLUP
  // (Assumes buttons/IR sensors connect the pin to GND when active)
  int inputs[] = {
    L1_IR, L1_AMBULANCE, L2_IR, L2_AMBULANCE,
    L3_IR, L3_AMBULANCE, L4_IR, L4_AMBULANCE
  };
  for (int pin : inputs) {
    pinMode(pin, INPUT_PULLUP);
  }
  
  // Set all Analog (Ultrasonic) pins as INPUT
  pinMode(L1_ULTRA, INPUT);
  pinMode(L2_ULTRA, INPUT);
  pinMode(L3_ULTRA, INPUT);
  pinMode(L4_ULTRA, INPUT);

  // Start with all lights red
  setAllRed();
  Serial.println("System Initialized. All lights red.");
  delay(2000);
}

void loop() {
  // === PRIORITY 1: AMBULANCE ===
  if (checkAmbulance()) {
    return; // Ambulance was serviced, restart loop
  }

  // === PRIORITY 2: DENSITY ===
  if (checkDensity()) {
    return; // High density lane was serviced, restart loop
  }

  // === PRIORITY 3: HUMAN ===
  if (checkHuman()) {
    return; // Human-request lane was serviced, restart loop
  }

  // === PRIORITY 4: DEFAULT CYCLE ===
  // If no other triggers, run the default cycle.
  Serial.println("No triggers. Running default cycle.");
  // Service Lanes 1 & 3
  serviceLanePair(1, defaultGreenTime);
  // Service Lanes 2 & 4
  serviceLanePair(2, defaultGreenTime);
}

// --- PRIORITY 1: AMBULANCE ---
bool checkAmbulance() {
  if (digitalRead(L1_AMBULANCE) == LOW) {
    serviceAmbulance(1);
    return true;
  }
  if (digitalRead(L2_AMBULANCE) == LOW) {
    serviceAmbulance(2);
    return true;
  }
  if (digitalRead(L3_AMBULANCE) == LOW) {
    serviceAmbulance(3);
    return true;
  }
  if (digitalRead(L4_AMBULANCE) == LOW) {
    serviceAmbulance(4);
    return true;
  }
  return false;
}

void serviceAmbulance(int lane) {
  Serial.print("AMBULANCE DETECTED: Lane ");
  Serial.println(lane);

  // Turn all other lanes RED
  setAllRed();
  
  // Activate emergency signal for the specific lane
  digitalWrite(BUZZER, HIGH);
  if (lane == 1) {
    digitalWrite(L1_GREEN, HIGH);
    digitalWrite(L1_BLUE, HIGH);
  } else if (lane == 2) {
    digitalWrite(L2_GREEN, HIGH);
    digitalWrite(L2_BLUE, HIGH);
  } else if (lane == 3) {
    digitalWrite(L3_GREEN, HIGH);
    digitalWrite(L3_BLUE, HIGH);
  } else if (lane == 4) {
    digitalWrite(L4_GREEN, HIGH);
    digitalWrite(L4_BLUE, HIGH);
  }
  
  // Hold for the specified ambulance time
  delay(ambulanceTime);

  // Turn off buzzer and lights, return to all red
  digitalWrite(BUZZER, LOW);
  setAllRed();
  delay(allRedTime); // Brief pause before next cycle
}


// --- PRIORITY 2: DENSITY ---
bool checkDensity() {
  int density1 = analogRead(L1_ULTRA);
  int density2 = analogRead(L2_ULTRA);
  int density3 = analogRead(L3_ULTRA);
  int density4 = analogRead(L4_ULTRA);

  // Find the lane with the highest density (lowest analog value)
  int minDensity = 4095;
  int denseLane = 0;

  if (density1 < minDensity) { minDensity = density1; denseLane = 1; }
  if (density2 < minDensity) { minDensity = density2; denseLane = 2; }
  if (density3 < minDensity) { minDensity = density3; denseLane = 3; }
  if (density4 < minDensity) { minDensity = density4; denseLane = 4; }

  // If the highest density is below our threshold, service it
  if (minDensity < DENSITY_THRESHOLD) {
    Serial.print("High Density Detected: Lane ");
    Serial.println(denseLane);
    
    if (denseLane == 1 || denseLane == 3) {
      serviceLanePair(1, densityGreenTime);
    } else {
      serviceLanePair(2, densityGreenTime);
    }
    return true;
  }
  return false;
}

// --- PRIORITY 3: HUMAN ---
bool checkHuman() {
  if (digitalRead(L1_IR) == LOW || digitalRead(L3_IR) == LOW) {
    Serial.println("Human Detected: Lanes 1 & 3");
    serviceLanePair(1, humanGreenTime);
    return true;
  }
  if (digitalRead(L2_IR) == LOW || digitalRead(L4_IR) == LOW) {
    Serial.println("Human Detected: Lanes 2 & 4");
    serviceLanePair(2, humanGreenTime);
    return true;
  }
  return false;
}

// --- CORE TRAFFIC LIGHT FUNCTIONS ---

// Services a pair of lanes (1&3 or 2&4)
void serviceLanePair(int pair, int greenTime) {
  setAllRed();
  delay(allRedTime);

  if (pair == 1) { // Service Lanes 1 & 3
    Serial.println("STATE: Lanes 1 & 3 GREEN");
    digitalWrite(L1_GREEN, HIGH);
    digitalWrite(L3_GREEN, HIGH);
    digitalWrite(L2_RED, HIGH);
    digitalWrite(L4_RED, HIGH);
    
    delay(greenTime);

    // Transition to Yellow
    digitalWrite(L1_GREEN, LOW);
    digitalWrite(L3_GREEN, LOW);
    digitalWrite(L1_YELLOW, HIGH);
    digitalWrite(L3_YELLOW, HIGH);
    
    delay(yellowTime);
  
  } else { // Service Lanes 2 & 4
    Serial.println("STATE: Lanes 2 & 4 GREEN");
    digitalWrite(L2_GREEN, HIGH);
    digitalWrite(L4_GREEN, HIGH);
    digitalWrite(L1_RED, HIGH);
    digitalWrite(L3_RED, HIGH);

    delay(greenTime);

    // Transition to Yellow
    digitalWrite(L2_GREEN, LOW);
    digitalWrite(L4_GREEN, LOW);
    digitalWrite(L2_YELLOW, HIGH);
    digitalWrite(L4_YELLOW, HIGH);
    
    delay(yellowTime);-
  }

  // End with all red
  setAllRed();
  delay(allRedTime);
}

// Helper function to set all lights to RED
void setAllRed() {
  // All Green OFF
  digitalWrite(L1_GREEN, LOW);
  digitalWrite(L2_GREEN, LOW);
  digitalWrite(L3_GREEN, LOW);
  digitalWrite(L4_GREEN, LOW);
  
  // All Yellow OFF
  digitalWrite(L1_YELLOW, LOW);
  digitalWrite(L2_YELLOW, LOW);
  digitalWrite(L3_YELLOW, LOW);
  digitalWrite(L4_YELLOW, LOW);

  // All Blue OFF
  digitalWrite(L1_BLUE, LOW);
  digitalWrite(L2_BLUE, LOW);
  digitalWrite(L3_BLUE, LOW);
  digitalWrite(L4_BLUE, LOW);

  // All Red ON
  digitalWrite(L1_RED, HIGH);
  digitalWrite(L2_RED, HIGH);
  digitalWrite(L3_RED, HIGH);
  digitalWrite(L4_RED, HIGH);
}