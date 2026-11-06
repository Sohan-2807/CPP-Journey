#include<iostream>
using namespace std;

class A {
public:
    int a;
};

// virtual inheritance prevents duplicate copies of A in D
class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {}; // diamond problem resolved

int main() {
    D obj;
    obj.a = 100; // unambiguous with virtual (without virtual: error ambiguous)
    cout << "a: " << obj.a << endl;
    return 0;
}
