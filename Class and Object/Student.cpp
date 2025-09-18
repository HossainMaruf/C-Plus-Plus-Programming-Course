#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    int rollNumber;
    float marks;
};

int main() {
    Student st;
    st.name = "Hasibul Islam";
    st.rollNumber = 1010;
    st.marks = 98.5f; // F
    cout << st.name << " " << st.rollNumber << " " << st.marks << endl;
    return 0;
}