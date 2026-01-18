#include <iostream>
using namespace std;
class Employee {
    string name;
    string empId;
    float basicSalary;
    float houseRent;
    float medicalAllowance;
    public:
    Employee(string name, string empId, float basicSalary) {
        this->name = name;
        this->empId = empId;
        this->basicSalary = basicSalary;
        this->houseRent = 0.5F * basicSalary;
        this->medicalAllowance = 0.3F * basicSalary;
    }
    float getBasicSalary() { return basicSalary; }
    float getHouseRent() { return houseRent; }
    float getMedicalAllowance() { return medicalAllowance; }
    virtual float getTotalSalary() { return getBasicSalary() + getHouseRent() + getMedicalAllowance(); }
};

class FulltimeEmployee: public Employee {
    public:
    FulltimeEmployee(string name, string empId, float basicSalary): Employee(name, empId, basicSalary) {
    }
    // float getTotalSalary() { return getBasicSalary() + getHouseRent() + getMedicalAllowance() + 1000;  }
    float getTotalSalary() { return Employee::getTotalSalary() + 1000; }
};

class ParttimeEmployee: public Employee {
    public:
    ParttimeEmployee(string name, string empId, float basicSalary):Employee(name, empId, basicSalary) {
    }
};

int main() {
//    FulltimeEmployee *full = new FulltimeEmployee("Maruf", "100", 1000);
//    cout << full->getTotalSalary() << endl; // 2800
//    ParttimeEmployee *part = new ParttimeEmployee("Hossain", "200", 500);
    // cout << part->getTotalSalary() << endl; // 900
    Employee *e = new FulltimeEmployee("Maruf", "100", 1000); // upcasting
    /**
     * parent class reference but child class object
     */
    cout << e->getTotalSalary() << endl;
    /**
     * if not virtual then 1800
     * if virtual then 2800
     */
    return 0;
}
