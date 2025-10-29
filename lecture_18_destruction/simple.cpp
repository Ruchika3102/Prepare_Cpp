#include <iostream>
using namespace std;

class Car {
    string model;

public: 

    Car(string model) {
        this->model = model;
    }
    ~Car() {
        cout << "Car is destroyed" << endl;
    }
};

int main() {
    Car c1("BMW");
    return 0;
}