#include<iostream>
using namespace std;
float add(float num1, float num2){
    return num1 + num2;
}
float sub(float num1, float num2){
    return num1 - num2;
}
float multiply(float num1, float num2){
    return num1 * num2;
}
float divide(float num1, float num2){
    if(num2!=0){
        return num1 / num2;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}
int main(){
    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    char operation;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
switch(operation){
    case '+':
    cout<<"Addition of two given numbers are: "<<add(num1,num2);
    break;
    case '-':
    cout<<"Subtraction of two given numbers are: "<<sub(num1,num2);
    break;
    case '*':
    cout<<"Multiplication of two given numbers are: "<<multiply(num1,num2);
    break;
    case '/':
    cout<<"Division of two given numbers are: "<<divide(num1,num2);
    break;
    default:
    cout<<"Invalid operation!";
}
    return 0;
}