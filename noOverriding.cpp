#include <iostream>
using namespace std;

class baseClass {
    public:
    virtual void perkenelan() final {
        cout << "Hallo saya function dari base class";
    }
};

