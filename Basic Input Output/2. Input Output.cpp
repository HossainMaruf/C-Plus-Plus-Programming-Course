#include <iostream>
using namespace std;

int main() {
    int id;
    float cgpa;
    char name[32];

    cin >> id >> cgpa;
    cin.getline(name, sizeof(name));
    cout << id << "=ID" << endl << cgpa << endl << name << endl;
    cout << "Name = " << name << " whose id = " << id << " and cgpa = " << cgpa;

    /**
     * >> = Extraction Operator
     * << = Insertion Operator
    */


    return 0;
}