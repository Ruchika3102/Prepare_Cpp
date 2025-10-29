#include <iostream>
using namespace std;
float convertCelsiusToFahrenheit(float value) {
    cout << "Enter temperature in Celsius: ";
    cin >> value;
    return (value * 9/5) + 32;
}

float convertFahrenheitToCelsius(float value) {
    cout << "Enter temperature in Fahrenheit: ";
    cin >> value;
    return (value - 32) * 5/9;
}

float convertINRToUSD(float value) {
    cout << "Enter amount in INR: ";
    cin >> value;
    return value / 83.0;  //1 USD = 83 INR
}

float convertUSDToINR(float value) {
    cout << "Enter amount in USD: ";
    cin >> value;
    return value * 83.0;
}
int main() {
    char choice;
    float value, result;
    cout << "a. Celsius to Fahrenheit\n";
    cout << "b. Fahrenheit to Celsius\n";
    cout << "c. INR to USD\n";
    cout << "d. USD to INR\n";
    cout << "Enter your choice: ";
    cin >> choice;


    switch(choice) {
        case 'a':
            cout << "Temperature in Fahrenheit: " << convertCelsiusToFahrenheit << "°F\n";
            break;
        case 'b':
            cout << "Temperature in Celsius: " << convertFahrenheitToCelsius(value) << "°C\n";
            break;
        case 'c':
            cout << "Amount in USD: $" << convertINRToUSD(value) << "\n";
            break;
        case 'd':
            cout << "Amount in INR: ₹" << convertUSDToINR(value) << "\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}
