#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 10.2;
    char name[32] = "Maruf Hossain";
    cout << "Hello World\n";
    cout << "Shanto Mariam University of Creative Technology" << endl;
    /**
     * endl is slower than \n
     */
    cout << "Uttara, Dhaka, Bangladesh" << endl;
    cout << "Value of a = " << a << endl
         << "Value of b= " << b << endl
         << "Name =  " << name;
    return 0;
}