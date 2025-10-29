#include<iostream>
using namespace std;
int main(){
    int n, reversed = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        int d=n%10;
        reversed=reversed*10+d;
        n=n/10;
    }
    cout << "The sum of digits is: " << reversed << endl;
    return 0;
}