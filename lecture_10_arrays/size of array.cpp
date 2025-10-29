#include<iostream>
using namespace std;
int main(){
    int arr[]={1, 2, 3, 4, 5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array: "<<size<<endl;
    return 0;
}



// but in reality size of array is no. of elements * size of element if int then size of element is 4 bytes