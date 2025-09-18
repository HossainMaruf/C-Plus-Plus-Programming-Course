#include <iostream>
using namespace std;

class Rectangle {
   float length; 
   float breadth;
   public:
   void setLength(const float l) {
     if(l < 0.0f) length = 0; 
     else length = l;
   }
   float getLength() { return length; }
   void setBreadth(const float b) {
     if(b < 0.0f) breadth = 0; 
     else breadth = b;
   }
   float getBreadth() { return breadth; }
};

int main() {
    Rectangle r;
    float l, b;
    cin >> l >> b;
    r.setLength(l);
    r.setBreadth(b);
    cout << "Length = " << r.getLength() << endl;
    cout << "Breadth = " << r.getBreadth() << endl;
    cout << "Area = " << r.getLength() * r.getBreadth() << endl;
    return 0;
}