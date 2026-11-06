#include<iostream>
using namespace std;

class Demo {
    int id;
public:
    Demo(int i) {
        id = i;
        cout << "Constructor called for " << id << endl;
    }
    ~Demo() { // destructor: ~ClassName(), no params, cannot overload
        cout << "Destructor called for " << id << endl;
    }
};

int main() {
    Demo d1(1);
    {
        Demo d2(2); // destroyed first when scope ends (LIFO order)
    }
    Demo d3(3);
    return 0;
}
