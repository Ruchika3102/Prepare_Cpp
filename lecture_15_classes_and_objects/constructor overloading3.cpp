#include<iostream>
using namespace std;

class Car{
public:
    void speed(int speed){
        cout<<"The top speed "<<speed<<" km/h"<<endl;
    }
    void speed(int speed,string brand){
        cout<<brand<<" top speed = "<<speed<<" km/h"<<endl;
    }
    void speed(int speed, string brand, string color){
        cout<<color<<" "<<brand<<" top speed = "<<speed<<" km/h"<<endl;
    }
};

int main(){
    Car c1;
    c1.speed(400);
    c1.speed(450,"Fortuner");
    c1.speed(500,"BMW","Yellow");
    return 0;
}