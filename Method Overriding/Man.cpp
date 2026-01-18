#include <iostream>
using namespace std;
class Man {
    public:
  void walk() {
    cout << "Man Walking" << endl;
  }  
  void eat() {
    cout << "Man Eating" << endl;
  }
  virtual void talk() {
    cout << "Man Talking" << endl;
  }
};

class Singer: public Man {
    void sing() {
        cout << "Singing" << endl;
    }
    void talk() {
        cout << "Singer Talking" << endl;
    }
};
int main() {
//    Singer s = new Man(); # ERROR
    Man *m = new Singer();
    m->eat();
    m->talk();
    m->walk();
    // Singer s = new Singer();
    // ((Singer)m).sing();
    dynamic_cast<Singer*>(Man);
    /**
     * Downcasting is tricky
     * When reference variable contain Singer object
     * then you can downcast to Man
     */
    /**
     * ClassCastException for below code
     */
    // Man m1 = new Man();
    // ((Singer)m1).sing();
    /**
     * s1 having the instance of Singer
     */
    Singer *s1 = new Singer();
    // ((Singer)s1).sing();
    /**
     * so before downcasting you should check that
     */
    if(m instanceof Singer) {
        ((Singer)m).sing();
    }
}