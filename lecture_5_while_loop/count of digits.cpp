#include<iostream>
using namespace std;
int main(){
    int n, sum = 0,count=0;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        int d=n%10;
        count=count+1;
        sum=sum+d;
        n=n/10;
    }
    cout << "The no. of digits is: " << count << endl;
    return 0;
}