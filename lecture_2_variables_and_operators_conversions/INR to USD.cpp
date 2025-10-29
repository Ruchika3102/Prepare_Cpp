#include <iostream>
using namespace std;

int main() {
    float inr, usd;
    cout << "Enter amount in INR: ";
    cin >> inr;
    usd = inr / 83.0;  //1 USD = 83 INR
    cout << "Amount in USD: $" << usd << "\n";
    return 0;
}