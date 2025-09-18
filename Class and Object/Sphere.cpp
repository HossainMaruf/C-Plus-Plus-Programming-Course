#include <iostream>
using namespace std;

class Sphere {
    float radius;
    const float PI = 3.1416f; // default values
    public:
    Sphere(float radius) {
        this->radius = radius;
    }
    Sphere(const Sphere &s) {
        this->radius = s.radius;
    }
    void setRadius(float radius) { this->radius = radius; }
    float getRadius() { return radius; }
    float getSurfaceArea() { return 4 * PI * radius * radius; }
    float getVolume() { return (4/3.0f)*PI*radius*radius*radius; }
};
int main() {
    Sphere s(12.4f); 
    cout << "Surface area = " << s.getSurfaceArea() << endl;
    cout << "Volume = " << s.getVolume() << endl; 
    Sphere copy(s); 
    cout << "Surface area = " << copy.getSurfaceArea() << endl;
    cout << "Volume = " << copy.getVolume() << endl; 

    return 0;
}