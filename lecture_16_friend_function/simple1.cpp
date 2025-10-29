#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    public:
    Student(string name,int age){
        this->name=name;
        this->age=age;
    }

    friend void display(Student s1);
    
};
void display(Student s1){
    cout<<"Name: "<<s1.name<<endl<<"Age: "<<s1.age<<endl;
}
int main(){
    Student s1("Ramesh",100);
    display(s1);
    return 0;
}