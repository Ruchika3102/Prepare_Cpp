#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        int d=n%10;
        sum=sum+d;
        n=n/10;
    }
    cout << "The sum of digits is: " << sum << endl;
    return 0;
}