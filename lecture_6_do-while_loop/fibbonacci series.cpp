#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter limit here: ";
    cin>>n;
    int a=0,b=1,next;
    int i=1;
    do{
        cout<<a<<" ";
        next=a+b;
        a=b;
        b=next;
        i++;
    }while(i<=n);
}                     