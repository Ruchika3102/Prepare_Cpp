#include <iostream>
#include <cmath>
using namespace std;

float calculatePower(float base, int exponent) {
    return pow(base, exponent);
}

int main() {
    float base;
    int exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << base << " raised to the power of " << exponent << " is " << calculatePower(base, exponent) << endl;
    return 0;
}