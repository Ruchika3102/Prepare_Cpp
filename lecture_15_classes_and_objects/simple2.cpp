#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    string color;
    float price;

    car(string brand,string color,float price){
        this->brand=brand;
        this->color=color;
        this->price=price;
    }

    void display(){
        cout<<"My Car Brand: "<<brand<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Price: "<<price<<endl;

    }
};
int main(){
    car c1("BMW","Black",18983083);
    c1.display();
    return 0;
}