#include<iostream>
using namespace std;

class Base1 {
public:
    Base1()  { cout << "Base1 constructor" << endl; }
    ~Base1() { cout << "Base1 destructor" << endl; }
};

class Base2 {
public:
    Base2()  { cout << "Base2 constructor" << endl; }
    ~Base2() { cout << "Base2 destructor" << endl; }
};

// declaration order: Base1 first, then Base2
class Derived : public Base1, public Base2 {
public:
    Derived()  { cout << "Derived constructor" << endl; }
    ~Derived() { cout << "Derived destructor" << endl; }
};

int main() {
    Derived d; // constructors: Base1 -> Base2 -> Derived
    return 0;  // destructors:  Derived -> Base2 -> Base1 (reverse order)
}
