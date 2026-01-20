#include <iostream>
using namespace std;

class Car {
   string brand; 
   string series;
   int cc;
   int mileage;
   public:
   Car(string brand, string series, int cc, int mileage) {
        this->brand = brand;
        this->series = series;
        this->cc = cc;
        this->mileage = mileage;
   }
   string getBrand() { return brand; }
   void setBrand(string brand) { this->brand = brand; }
   string getSeries() { return series; }
   void setSeries(string series) { this->series = series; }
   int getCc() { return cc; }
   void setCc(int cc) { this->cc = cc; }
   int getMileage() { return mileage; }
   void setMileage(int mileage) { this->mileage = mileage; }
};

int main() {
    Car car("Ferari", "FN", 1500, 10); 

    // Assign values when you create creating object

    // car.setBrand("Ferari");
    // car.setSeries("FN");
    // car.setCc(1500);
    // car.setMileage(10);
    cout << car.getBrand() << " " << car.getSeries() << " " << car.getCc() << " " << car.getMileage() << endl;

    return 0;
}
