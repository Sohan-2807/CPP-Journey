#include<iostream>
using namespace std;

class Base {
protected:
    int x; // accessible in derived class
public:
    void setX(int a) { x = a; }
};

class Derived : public Base { // single inheritance
public:
    void show() { cout << "x: " << x << endl; }
};

int main() {
    Derived d;
    d.setX(10);
    d.show();
    return 0;
}
