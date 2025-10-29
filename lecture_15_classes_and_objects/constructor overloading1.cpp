// basically overloading means name of class/function is same but parameters are different


#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    string color;
    float price;
    string model;

    car(string brand,string color,float price){
        this->brand=brand;
        this->color=color;
        this->price=price;
    }
    car(string brand,string color,float price,string model){
        this->brand=brand;
        this->color=color;
        this->price=price;
        this->model=model;
    }

    void display(){
        cout<<"My Car Brand: "<<brand<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Model: "<<model<<endl;

    }
};
int main(){
    car c1("BMW","Black",18983083);
    c1.display();
    cout<<".........."<<endl;
    car c2("Toyota","White",5000000,"Fortuner");
    c2.display();
    return 0;
}