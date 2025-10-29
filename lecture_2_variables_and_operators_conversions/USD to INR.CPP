#include <iostream>
using namespace std;

int main() {
    float usd, inr;
    cout << "Enter amount in USD: ";
    cin >> usd;
    inr = usd * 83.0;
    cout << "Amount in INR: ₹" << inr << "\n";
    return 0;
}