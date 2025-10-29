#include <iostream>
#include <cmath>
using namespace std;
float calculateSquareRoot(float number) {
    return sqrt(number);
}
float calculatePower(float base, int exponent) {
    return pow(base, exponent);
}
int main() {
    int choice;
    float number, base;
    int exponent;
    cout << "Choose an operation:\n";
    cout << "1. Calculate Square Root\n";
    cout << "2. Calculate Power\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Enter a number to find its square root: ";
            cin >> number;
            cout << "Square root of " << number << " is " << calculateSquareRoot(number) << endl;
            break;
        case 2:
            cout << "Enter base and exponent: ";
            cin >> base >> exponent;
            cout << base << " raised to the power of " << exponent << " is " << calculatePower(base, exponent) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}