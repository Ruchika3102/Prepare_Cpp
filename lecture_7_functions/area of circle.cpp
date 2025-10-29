// #include<iostream>
// using namespace std;
// float area(float r){
//     return 3.14*r*r;
// }
// int main(){
//     float r;
//     cout << "Enter radius of circle: ";
//     cin >> r;
//     float a = area(r);
//     cout << "Area of circle is: " << a << endl;
//     return 0;
// }


#include<iostream>
#include<cmath>
using namespace std;
float area(float r){
    return M_PI*r*r;
}
int main(){
    float r;
    cout << "Enter radius of circle: ";
    cin >> r;
    float a = area(r);
    cout << "Area of circle is: " << a << endl;
    return 0;
}