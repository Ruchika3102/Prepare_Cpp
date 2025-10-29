#include<iostream>
using namespace std;
class Car{
    private:
    string brand;
    string model;
    public:
    friend void set_property(Car &c1,string brand,string model);
    friend void get_property(Car &c1);
};
void set_property(Car &c1,string brand,string model){
    c1.brand=brand;
    c1.model=model;
}
void get_property(Car &c1){
    cout<<"Brand= "<<c1.brand<<endl<<"Model= "<<c1.model<<endl;
}
int main(){
    Car c1;
    set_property(c1,"Toyoto","Fortuner");
    get_property(c1);
    return 0;
}
