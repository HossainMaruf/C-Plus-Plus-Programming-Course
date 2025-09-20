#include <iostream>
using namespace std;

class CEOMS {
    public:
    CEOMS() {
        cout << "CEO of MS" << endl;
    }
};

class CEOFB {
    public:
    CEOFB() {
        cout << "CEO of FB" << endl;
    }
};

class You: public CEOMS, CEOFB {
    // Possible, no diamond problem like Java
};

int main() {
    // No ambiguity
    return 0;
}