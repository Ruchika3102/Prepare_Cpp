//using pure virtual function we reach abstraction

#include<iostream>
using namespace std;
class Car{
    public:
    virtual void showSpeed()=0; //(pure virtual function) mvirtual function is that who has not any body only we declare it once (here 0 is the version)
};
class BMW : public Car{
    public:
    void showSpeed(){
        cout<<"Top speed of BMW = 350km/h"<<endl;
    }
    void showColor(){
        cout<<"Color = Yellow"<<endl;
    }
};
class Auddi : public Car{
    public:
    void showSpeed(){
        cout<<"Top speed of Auddi = 450km/h"<<endl;
    }
    void showColor(){
        cout<<"Color = red"<<endl;
    }
};
int main(){
    BMW b1;
    b1.showSpeed();
    b1.showColor();
    Auddi a1;
    a1.showSpeed();
    a1.showColor();
    return 0;
}




