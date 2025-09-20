#include <iostream>
using namespace std;

class Person {
    string name;
    int id;

    public:
    Person(string name, int id) { 
        this->name = name; this->id = id; 
        cout << "From Person" << endl;
    }
    string getName() { return name; }
    void setName(string name) { this->name = name; }
    int getId() { return id; }
    void setId(int id) { this->id = id; }
    void displayInfo() {
        cout << name << "\t" << id;
    }
};

class Student: public Person {
    public:
    Student(string name, int id): Person(name, id) {
        cout << "From Student "<< endl;
    }
};

int main() {
    Student *s = new Student("Maruf", 1001);
    s->displayInfo();
    s->setName("Hossain");
    s->setId(2001);
    cout << s->getName();
    cout << s->getId();
    delete s;
    return 0;
}