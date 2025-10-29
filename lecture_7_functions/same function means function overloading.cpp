#include<iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}
int sum(int a, int b) {
    return a + b;
}
int main(){
    
    cout<<" sum1: "<<sum(5, 10)<<endl;
    cout<<" sum1: "<<sum(15, 10)<<endl;
    
    return 0;
}
    // it shows error because function name and counting of parameters is same
    // this is called function overloading

#include<iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}
int sum(int a, int b, int c) {
    return a + b + c;
}
int main(){
    
    cout<<" sum1: "<<sum(5, 10)<<endl;
    cout<<" sum1: "<<sum(15, 10)<<endl;
    cout<<" sum1: "<<sum(5, 10, 15)<<endl;

    return 0;
}
// it does not shows error because function name is same but counting of parameters is different
