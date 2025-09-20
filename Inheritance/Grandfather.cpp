#include <iostream>
using namespace std;

class Grandfather {
    public:
        Grandfather() {
        cout << "Grandfather" << endl;
        }
        void GrandfatherAdviceMarry() {
        cout << "you will marry Katrina Kaif" << endl;
        } 
};

class Father: public Grandfather {
    public:
        Father() {
        cout << "Father" << endl;
        }
        void FatherAdviceMarry() {
           cout << "you will marry Karina" << endl;
        }
};

class Son: public Father {
    public:
        Son() {
        cout << "Son" << endl;
        }
        void SonWillMarry() {
            cout << "I want to marry Sraddha" << endl;
        }
};
int main() {
    Grandfather *gf = new Grandfather();
    Father *f = new Father();
    Son *s = new Son();
    gf->GrandfatherAdviceMarry();
    f->FatherAdviceMarry();
    s->SonWillMarry();
    delete gf, f, s;
    return 0;
}