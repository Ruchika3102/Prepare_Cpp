#include<iostream>
using namespace std;
class Emp{
    public:
    void work(){
        cout<<"Currently working as SDE"<<endl;
    }
};
class Developer: public Emp{
    public:
    void React(){
        cout<<"Working at react Deveoloper"<<endl;
    }
};
class Tester: public Emp{
    public:
    void test(){
        cout<<"Testing the react Application"<<endl;
    }
};
int main(){
    Developer d;
    Tester t;
    d.work();
    d.React();
    t.work();
    t.test();
    return 0;
}