#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter limit here: ";
    cin>>n;
    int a=0,b=1,next;
    int i=3;
    if(n==1){
        cout<<"0";
    }
    else if(n==2||n==3){
        cout<<"1";
    }
    else{
        do{
        next=a+b;
        a=b;
        b=next;
        i++;
    }while(i<=n);
    cout<<" "<<next;
}
}
