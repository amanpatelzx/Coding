#include <iostream>
#include <cmath>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different.\n";
        cout << "Root 1 = " << root1 << "\n";
        cout << "Root 2 = " << root2 << "\n";
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2*a);
        cout << "Roots are real and same.\n";
        cout << "Root 1 = Root 2 = " << root1 << "\n";
    }
    else {
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);
        cout << "Roots are complex and different.\n";
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i\n";
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i\n";
    }

    return 0;
}
