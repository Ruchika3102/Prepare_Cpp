#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "The array is:  ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}