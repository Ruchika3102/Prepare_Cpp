#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    int n1=n;
    while (n1 != 0) {
        int d=n1%10;
        sum=sum+pow(d,3);
        n1=n1/10;
    }
    if(n1==n){
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}