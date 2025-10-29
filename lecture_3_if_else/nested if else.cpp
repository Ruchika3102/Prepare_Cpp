#include<iostream>
using namespace std;
int main(){
    int ram,shyaam,mohan;
    cout<<"Enter the money of ram: ";
    cin>>ram;
    cout<<"Enter the money of shyaam: ";
    cin>>shyaam;
    cout<<"Enter the money of mohan: ";
    cin>>mohan;
    if(ram>shyaam){
        if(ram>mohan){
            cout<<"Ram is the richest"<<endl;
        }
        else{
            cout<<"Mohan is the richest"<<endl;
        }
    }
    else{
        if(shyaam>mohan){
            cout<<"Shyaam is the richest"<<endl;
        }
        else{
            cout<<"Mohan is the richest"<<endl;
        }
    }
    return 0;
}
