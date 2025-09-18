#include <iostream>
using namespace std;

class Trapezium {
   float side1;
   float side2;
   float distance;
   public:
   Trapezium() { // setting default values
    side1 = 0.0f;
    side2 = 0.0f;
    distance = 0.0f;
   }
   float getSide1() { return side1; }
   void setSide1(float side1) { this->side1 = side1; }
   float getSide2() { return side2; }
   void setSide2(float side2) { this->side2 = side2; }
   float getDistance() { return distance; }
   void setDistance(float distance) { this->distance = distance; }
   float getArea() { return (0.5f * (side1 + side2) * distance); }
};

int main() {
    Trapezium t;
    t.setSide1(10);
    t.setSide2(20);
    t.setDistance(2);
    cout << t.getArea();
    return 0;
}