#include <iostream>
using namespace std;

class Printer {
   public:
   void print(int a) { cout << a  << " void print(int a)" << endl; } 
   void print(float a) { cout << a  << " void print(float a)" << endl; } 
   void print(double a) { cout << a << " void print(double a)" << endl; } 
   void print(char a) { cout << a << " void print(char a)" << endl; } 
   void print(int a, int b) { cout << "void print(int a, int b)" <<endl; }
   void print(float a, float b) { cout << "void print(float a, float b)" << endl; }
   void print(double a, double b) { cout << "void print(double a, double b)" << endl; }
   void print(char a, char b) { cout << "void print(char a, char b)" << endl; }
};

int main() {
    Printer p;
    p.print(23);
    p.print(10.4);
    p.print(4.5F);
    p.print('m');
    p.print(10, 34);
    p.print(10.3, 213.234);
    p.print(34.2F, 23.2F);
    p.print('m', 'n');
    return 0;
}