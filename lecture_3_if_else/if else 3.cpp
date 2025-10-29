#include<iostream>
using namespace std;
int main(){
    int balance;
    cout<<"Enter your balance here:";
    cin>>balance;
    if(balance>=150000){
        cout<<"You can buy mackbook pro"<<endl;
    }
    else if(balance>=100000){
        cout<<"You can buy mackbook air"<<endl;
    }
    else if(balance>=70000){
        cout<<"You can buy the i-phone"<<endl;
    }
    else if(balance>=50000){
        cout<<"You can buy the i-watch"<<endl;
    }
    else{
        cout<<"Invalid balance"<<endl;
    }
    return 0;

}