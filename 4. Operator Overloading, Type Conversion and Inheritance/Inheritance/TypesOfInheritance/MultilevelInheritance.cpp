#include<iostream>
using namespace std;

class A {
public:
    void showA() { cout << "Class A" << endl; }
};

class B : public A { // intermediate class
public:
    void showB() { cout << "Class B" << endl; }
};

class C : public B { // multilevel inheritance (A -> B -> C)
public:
    void showC() { cout << "Class C" << endl; }
};

int main() {
    C obj;
    obj.showA(); // from grandparent
    obj.showB(); // from parent
    obj.showC(); // own method
    return 0;
}
