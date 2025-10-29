#include<iostream>
using namespace std;
int main(){ 
    int n, count = 0, i = 1;
    cout << "Enter limit here: ";
    cin >> n;
    while (i <= n) {
        if (i % 2 != 0) {
            count++;
            cout << i << endl;
        }
        i++;
    }
    cout << "The total odd natural numbers between given limit is: " << count << endl;
    return 0;
}