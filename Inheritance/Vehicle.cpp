#include <iostream>
using namespace std;

class Vehicle {
    int gear;
    int cc;
    public:
    Vehicle(int gear, int cc) {
        this->gear = gear;
        this->cc = cc;
        cout << "From Vehicle" << endl;
    }
    void displayInfo() {
        cout << gear << "\t" << cc << endl;
    }
};

class Car: public Vehicle {
    public:
    Car(int gear, int cc): Vehicle(gear, cc) {
        cout << "From Car" << endl;
    }

};

class Motorbike: public Vehicle {
    public:
    Motorbike(int gear, int cc): Vehicle(gear, cc) {
        cout << "From Motorbike" << endl;
    }
};

int main() {
    Car *c = new Car(5, 400); 
    c->displayInfo();
    Motorbike *m = new Motorbike(4, 150);
    m->displayInfo();
    delete c, m;
    return 0;
}