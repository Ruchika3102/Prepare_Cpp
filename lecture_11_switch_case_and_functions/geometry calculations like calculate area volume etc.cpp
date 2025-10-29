#include <iostream>
#include <cmath>
using namespace std;

float calculateCircleArea(float radius) {
    return M_PI * radius * radius;
}

float calculateRectangleArea(float length, float width) {
    return length * width;
}

float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}
float calculateVolumeOfSphere(float radius) {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}
float calculateVolumeOfCylinder(float radius, float height) {
    return M_PI * pow(radius, 2) * height;
}

int main() {
   float radius, length,breadth,height,base;
   int choice;
    cout << "Geometry Calculations Menu:\n";
    cout << "1. Area of Circle\n";
    cout << "2. Area of Rectangle\n";
    cout << "3. Area of Triangle\n";
    cout << "4. Volume of Sphere\n";
    cout << "5. Volume of Cylinder\n";
    cout << "Enter your choice (1-5): ";
    cin >> choice;
   switch(choice) {
       case 1:
           cout << "Enter radius of circle: ";
           cin >> radius;
           cout << "Area of circle: " << calculateCircleArea(radius) << endl;
           break;
       case 2:
           cout << "Enter length and breadth of rectangle: ";
           cin >> length >> breadth;
           cout << "Area of rectangle: " << calculateRectangleArea(length, breadth) << endl;
           break;
       case 3:
           cout << "Enter base and height of triangle: ";
           cin >> base >> height;
           cout << "Area of triangle: " << calculateTriangleArea(base, height) << endl;
           break;
       case 4:
           cout << "Enter radius of sphere: ";
           cin >> radius;
           cout << "Volume of sphere: " << calculateVolumeOfSphere(radius) << endl;
           break;
       case 5:
           cout << "Enter radius and height of cylinder: ";
           cin >> radius >> height;
           cout << "Volume of cylinder: " << calculateVolumeOfCylinder(radius, height) << endl;
           break;
       default:
           cout << "Invalid choice.\n";
   }
    return 0;
}