#include <iostream>
using namespace std;

// This is Single Inheritance  
class Hybrid {};
class FullHybrid: public Hybrid {};

// Hierarchical Inheritance 
class Shape {};
class Circle: public Shape {};
class Sphere: public FullHybrid {};

// Now Shape is Hybrid (Single + Hierarchical)

int main() {
    return 0;
}