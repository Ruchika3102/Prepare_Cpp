#include<iostream>
using namespace std;
int main(){
    int n;
    int c=0;
    cout<<"enter no: "<<endl;
    cin>>n;
    for (int i=1;i<=n;i++){
        if (n%i==0){
            c+=1;
        }
    }
    if (c==2){
        cout<<"prime number"<<endl;
    }
    else{
        cout<<"not a prime number"<<endl;
    }
}