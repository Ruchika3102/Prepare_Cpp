#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    float fee;
    
    void display(){
        cout<<"My name is: "<<name<<endl<<"My age is: "<<age<<endl<<"Fees: "<<fee<<endl;
    }
};
int main(){
    Student s1;
    s1.name="Ruchika";
    s1.age=19;
    s1.fee=120000;
    s1.display();
}