// #include <string.h>
// #include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Employee {
        int id;
        float salary;
    public: // access modifer
        char name[32];
        void setId(int id) { if(id < 0) this->id = 0; else this->id = id; }
        int getId() { return id; }
        void setSalary(float salary) { if(salary < 0) this->salary = 0; else this->salary = salary;}
        float getSalary() { return salary; }
    // By default all the members are private
};
/**
 * Access Modifiers
 * 1. public
 * 2. private
 * 3. protected
*/

int main() {
    Employee emp; // Instantiation
    /**
     * emp is the instance or object variable of Employee
    */
//    emp.id = 10;
//    emp.salary = 2000.2;
    // Error
//    emp.name = "Asif Karim";
//    strcpy(emp.name, "Asif Karim");


    // cout << "Enter id: ";
    // cin >> emp.id;

    // cout << "Enter salary: ";
    // cin >> emp.salary;

    // cin.ignore();

    // cout << "Enter name: ";
    // cin.getline(emp.name, sizeof(emp.name));

    emp.setId(10);
    emp.setSalary(100);

    cout << emp.getId() << " " << emp.getSalary() << endl;    

    return 0;
}