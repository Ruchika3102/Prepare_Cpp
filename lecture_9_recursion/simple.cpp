// #back tracking
// #head recursion


#include<iostream>
using namespace std;
void print(int n){
    if(n>5){                  //if(n>5)is a base case
        return;
    }
    cout << n << endl;
    print(n+1);
}
int main() {
    print(1);
    return 0;
}


