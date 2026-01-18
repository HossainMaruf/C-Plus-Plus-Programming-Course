#include <iostream>

using namespace std;
class Employee {
    public:
    string name;
    int id;
    float salary;
};

int main() {
    Employee emp;
    // emp.name = "Hasibul Islam";
    // emp.id = 1010;
    // emp.salary = 9800.5f; // F
    /**
     * Taking User Input
     */
    cin >> emp.name >> emp.id >> emp.salary;
    cout << emp.name << " " << emp.id << " " << emp.salary;
}
