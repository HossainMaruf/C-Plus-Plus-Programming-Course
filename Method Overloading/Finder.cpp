#include <iostream>
using namespace std;

class Finder {
    public:
    // 1
    // void F(short a) { cout << "short" << endl; }
    // void F(int a) { cout << "int" << endl; }
    // void F(long a) {cout << "long" << endl; }
    // void F(float a) {cout << "float" << endl; }
    // void F(double a) {cout << "double" << endl; }
    // 2
    // void F(int a) { cout << "int" << endl; }
    // void F(long a) {cout << "long" << endl; }
    // void F(float a) {cout << "float" << endl; }
    // void F(double a) {cout << "double" << endl; }
    // 3
      void F(int a) {cout << "int" << endl; }
      void F(long a) {cout << "long" << endl; }
      void F(float a) {cout << "float" << endl; }
      void F(double a) {cout << "double" << endl; }
    // 4
    //   void F(long a) {cout << "long" << endl; }
    //   void F(float a) {cout << "float" << endl; }
    //   void F(double a) {cout << "double" << endl; }
    // 5
    //   void F(float a) {cout << "float" << endl; }
    //   void F(double a) {cout << "double" << endl; }
    // 6
    // void F(double a) {cout << "double" << endl; }
};

int main() {
    Finder find;
    short s = 10;
    find.F(s);
    find.F('a');
    find.F(10);
    find.F(10L);
    find.F(10.4F);
    find.F(10.34); // No Promotion
    bool b = true;
    find.F(b);
/**
 * char,short,bool -> int
 * float -> double
 */
}