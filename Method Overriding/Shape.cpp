#include <iostream>
using namespace std;
class Shape {
    const float PI = 3.1416f;
   int radius; 
   public:
   Shape(int radius) { this->radius = radius; }
   void setRadius(int radius) { this->radius = radius; }
   int getRadius() { return radius; }
   float getPI() { return PI; }
   float getArea() { return getPI() * getRadius() * getRadius(); }
};

class Circle: public Shape {
    public:
    Circle(int radius):Shape(radius) {}
};

class Sphere: public Shape {
    public:
    Sphere(int radius):Shape(radius) {}
    float getArea() { return 4 * getPI() * getRadius() * getRadius(); }
};

int main() {
    Circle *c = new Circle(10);
    cout << c->getArea();
    Sphere *s = new Sphere(15);
    cout << s->getArea();
    delete c, s;
    return 0;
}