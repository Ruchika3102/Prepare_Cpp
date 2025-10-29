#include<iostream>
using namespace std;
class car{
    private:
    string brand;
    string model;
    string color;
    public:
    
    void set_property(string brand, string model, string color){
        this->brand=brand;
        this->model=model;
        this->color=color;
    }
    void get_property(){
        cout<<"MyCar Brand= "<<this->brand<<endl<<"Model= "<<this->model<<endl<<"Color= "<<this->color<<endl;

    }
};
int main(){
    car c1;
    c1.set_property("Toyoto","Fortuner","White");
    c1.get_property();
}
