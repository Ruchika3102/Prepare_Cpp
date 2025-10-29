#include<iostream>
using namespace std;

void passByValue(int x) {
    x = 10; // This change will not affect the original variable     value ch copy bnke pass hunda
}
void passByReference(int &y) {
    y = 20; // This change will affect the original variable       refrence ch address pass hunda
}
int main() {
    int a = 5;
    int b = 15;

    cout << "Before passByValue: a = " << a << endl;
    passByValue(a);
    cout << "After passByValue: a = " << a << endl; // a remains 5

    cout << "Before passByReference: b = " << b << endl;
    passByReference(b);
    cout << "After passByReference: b = " << b << endl; // b is now 20

    return 0;
}
