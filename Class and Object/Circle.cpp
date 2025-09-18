#include <iostream>
using namespace std;

class Circle {
   public:
   float radius; 
   const float PI = 3.1416f;
   void setRadius(float r) {
    if(r < 0.0f) radius = 0.0f;
    else radius = r;
   }
};

int main() {
    Circle c;
    float r;
    cin >> r;
    /**
     * if else for data validation
     * best approach, use setter with validation logic
     */
    c.setRadius(r);
    float area = c.PI * c.radius * c.radius;
    cout << c.radius << " Area = " << area;

    return 0;
}