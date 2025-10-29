#include<iostream>
using namespace std;
int main(){
    int n, reversed = 0;
    cout << "Enter a number: ";
    cin >> n;
    int n1=n;
    while (n1!= 0) {
        int d=n1%10;
        reversed=reversed*10+d;
        n1=n1/10;
    }
    if(reversed==n){
        cout<<"Palidrome";
    }
    else{
        cout<<"Not Palidrome";
    }
    return 0;
}