#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string here:";
    cin>>str;
    cout<<"You entered:"<<str.substr(0, str.length())<<endl;
}