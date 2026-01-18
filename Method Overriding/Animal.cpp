#include <iostream>
using namespace std;

class Animal {
    public:
   Animal() {
    cout << "From Animal" << endl;
   } 
};
class Dog: public Animal {
    public:
   Dog() {
    cout << "From Dog" << endl;
   } 

};
class Cat: public Animal {
    public:
   Cat() {
    cout << "From Cat" << endl;
   } 
};

int main() {
       Animal *a = new Animal(); 
       Dog *d = new Dog();
       Cat *c = new Cat();
       Animal *aa = new Dog();
       Animal *aaa = new Cat();
    //    Dog *dd = new Animal(); // ERROR
    //   Cat *cc = new Animal(); // ERROR
      return 0;
}