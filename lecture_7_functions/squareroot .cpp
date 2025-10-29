#include <iostream>
#include <cmath>
using namespace std;

float calculateSquareRoot(float number) {
    return sqrt(number);
}

int main() {
    float number;
    cout << "Enter a number to find its square root: ";
    cin >> number;
    cout << "Square root of " << number << " is " << calculateSquareRoot(number) << endl;
    return 0;
}