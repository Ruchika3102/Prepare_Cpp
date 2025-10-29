#include<iostream>
using namespace std;
void replaceString(string &str) {
    str = "Goodbye, World!"; 
}
int main() {
    string myString = "Hello, World!";
    cout << "Before modification: " << myString << endl;
    replaceString(myString);
    cout << "After modification: " << myString << endl;
    return 0;
}