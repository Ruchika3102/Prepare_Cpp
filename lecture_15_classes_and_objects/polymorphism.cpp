#include<iostream>
using namespace std;

class Bank{
    public: 
    virtual float rateOfInterest(){
        return 7.8;
    }
};
class HDFC : public Bank{
    public:
    float rateOfInterest(){
        return 8.9;
    }
};

class SBI: public Bank{
    public:
    float rateOfInterest(){
        return 7.1;
    }
};

class PNB : public Bank{
    public:
    float rateOfInterest(){
        return 7.2;
    }
};

int main()
{ Bank *ptr;
SBI s;
HDFC h;
PNB p;

ptr = &s;
cout<<"SBI Rate of Interest = "<<ptr->rateOfInterest()<<endl;

ptr = &h;
cout<<"HDFC Rate of Interest = "<<ptr->rateOfInterest()<<endl;

ptr = &p;
cout<<"PNB Rate of Interest = "<<ptr->rateOfInterest()<<endl;


    return 0;
}