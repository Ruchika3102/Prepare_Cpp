#include<iostream>
using namespace std;
int sum(int a,int b){
        return a+b;
    }
int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int c = sum(a, b);
    cout << "Sum of two numbers is: " << c << endl;
    return 0;
}


// void-for direct print,,,,,,,int, float,char,string -for return;  bust we can't call directly in cout if void function


// #include<iostream>
// using namespace std;
// void print(){
//     cout<<"hello prerika"<<endl;
// }
// int main(){
//     print();
// }