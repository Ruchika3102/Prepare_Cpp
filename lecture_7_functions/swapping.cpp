#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"the value of a "<<a<<" and b "<<b<<" after swapping.";
}
int main(){
    int a,b;
    cout<<"enter no here: ";
    cin>>a>>b;
    swap(a,b);

}