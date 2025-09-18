#include <iostream>
using namespace std;

class Triangle {
   float base;
   float height;
   public:
   void setBase(float base) {
        if(base < 0.0f) this->base = 0.0f;
        else this->base = base;
   } 
   float getBase() { return base; }
   void setHeight(float height) {
        if(height < 0.0f) this->height = 0.0f;
        else this->height = height;
   } 
   float getHeight() { return height; }
   float getArea() { return 0.5 * base * height; }
};

int main() {
    Triangle t;
    t.setBase(10);
    t.setHeight(5);
    cout << t.getArea() << endl;
    return 0;
}