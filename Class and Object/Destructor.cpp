#include <iostream>
using namespace std;

class Test {
  public:
    Test() {
      cout << "Constructor is called" << endl;
    }
    ~Test() {
      cout << "Destructor is called" << endl;
    }
};




int main() {

  Test t;
  /**
   * OUTPUT
   * Constructor and destructor will be called
  */

  Test *t1 = new Test(); 
  /**
   * OUTPUT
   * Constructor is called
   * NOTE: Only constructor will be called
   * You need to call the destructor explicitly
   * for destroying the heap object using delete keyword
  */

  delete t1; 
  /**
   * OUTPUT
   * Destructor is called
  */ 

  return 0;
}
