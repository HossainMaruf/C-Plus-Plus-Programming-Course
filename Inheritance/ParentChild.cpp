#include <iostream>
using namespace std;

class Parent {
    public:
    Parent() {
        cout << "From Parent" <<endl;
    }
    void displayText() {
        cout << "From parent displayText()" <<endl;
    }
};


class Child: public Parent {
    public:
    Child() {
        cout << "From Child" <<endl;
    }
    void displayInfo() {
        cout << "From parent displayInfo()" <<endl;
    }
};

int main() {
    Child c;
    c.displayText();
    c.displayInfo();
    return 0;
}