#include <iostream>
using namespace std;

class Matcher {
    public:
    void max(int a, float b) { cout << "void max(int, float)" << endl; } 
    void max(float a, int b) { cout << "void max(float, int)" << endl;}
    void max(double a, int  b) { cout << "void max(double, int)" << endl;}
    void max(int a, double b) {cout << "void max(int, double)" << endl;}
};

int main() {
    Matcher m;
    // m.max(10, 10); // all 4 matched
    // m.max(10.4F, 10.3F); // nothing matching
    // m.max('m', 10);
    /**
     * Since double does not auto promote that's why it need to match exactly
     */

    return 0;
}