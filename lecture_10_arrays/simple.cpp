// Array is linear data structure that stores the value of similar data type into the contiguous memory locations.

// square brackets are used to declare the size of an array in C++ and curly brackets are used to declare elements of an array.

// if the address of the first element is 1000, then the address of the second element will be 1004, and so on.

// if int marks[5] = {10, 20, 30, 40, 50}; means it contains 5 elements means indexes is from 0 to 4
// int contain 4 bytes

#include <iostream>
using namespace std;
int main() {
    int marks[5] = {10, 20, 30, 40, 50}; // declaration and initialization of array
    cout << "Marks of student 1: " << marks[0] << endl; // accessing first element
    cout << "Marks of student 2: " << marks[1] << endl; // accessing second element
    cout << "Marks of student 3: " << marks[2] << endl; // accessing third element
    cout << "Marks of student 4: " << marks[3] << endl; // accessing fourth element
    cout << "Marks of student 5: " << marks[4] << endl; // accessing fifth element
    return 0;
}