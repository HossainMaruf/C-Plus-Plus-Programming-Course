#include <bits/stdc++.h>
using namespace std;

class Rectangle {
    float length, breadth;
    public:
        void setLength(float length) {
            if(length < 0) this->length = 0;
            else this->length = length;
        }
        float getLength() { return length; }
        void setBreadth(float breadth) {
            if(breadth < 0) this->breadth = 0;
            else this->breadth = breadth;
        }
        float getBreadth() { return breadth; }
        float getArea() { return length * breadth; }
        float getPerimeter() { 
            if(length == 0 || breadth == 0) return 0;
            else return 2 * (length + breadth); 
        } 
};

int main() {
    Rectangle r;
    r.setLength(10.2);
    r.setBreadth(20.2);

    cout << r.getLength() << " " << r.getBreadth() << endl;
    cout << "Area = " << r.getArea() << endl;
    cout << "Perimeter = " << r.getPerimeter() << endl;

    r.setLength(40.5);

    cout << "Area = " << r.getArea() << endl;
    cout << "Perimeter = " << r.getPerimeter() << endl;

    return 0;
}