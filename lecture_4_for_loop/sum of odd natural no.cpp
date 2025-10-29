#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"Enter limit here"<<endl;
    cin>>n; 
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    cout<<"the sum of n odd natural no. are "<<sum;
    return 0;
}