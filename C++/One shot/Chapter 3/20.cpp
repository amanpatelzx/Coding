#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, count = 0, num = 2;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The first " << n << " prime numbers are: ";

    while (count < n) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
}