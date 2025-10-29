#include<iostream>
using namespace std;
class laptop{
    public:
    string company;
    int window;
    string color;

    laptop(string company,int window){
        this->company=company;
        this->window=window;
    }
    laptop(string company,int window,string color){
        this->company=company;
        this->window=window;
        this->color=color;
    }
    void display(){
        cout<<"Company: "<<company<<endl;
        cout<<"Window: "<<window<<endl;
        cout<<"Color: "<<color<<endl;
    }
};
int main(){
    laptop l1("dell",11);
    l1.display();
    cout<<".........."<<endl;
    laptop l2("hp",12,"white");
    l2.display();
}
//is method se jab two parameter hai tabhi bhi color: aisa likha ata hai output me



// or



#include<iostream>
using namespace std;
class laptop{
    public:
    string company;
    int window;
    string color;

    laptop(string company,int window){
        this->company=company;
        this->window=window;
    }
    laptop(string company,int window,string color){
        this->company=company;
        this->window=window;
        this->color=color;
    }
    void display(){
        cout<<"Company: "<<company<<endl;
        cout<<"Window: "<<window<<endl;

        if(color!=""){
        cout<<"Color: "<<color<<endl;
        }
    }
};
int main(){
    laptop l1("dell",11);
    l1.display();
    cout<<".........."<<endl;
    laptop l2("hp",12,"white");
    l2.display();
}
//is method se jab teen parameter hai tabhi color:  with color likha ata hai




