#include<iostream>
using namespace std;

struct A {
    int x; // public by default
};

class B {
    int x; // private by default
public:
    void set(int val) { x = val; }
    void show() { cout << "Class x: " << x << endl; }
};

union C {
    int a;    // shares memory with b
    char b;   // overwrites a
};

int main() {
    A s;
    s.x = 10; // accessible directly
    cout << "Struct x: " << s.x << endl;

    B c;
    // c.x = 20; // error: x is private
    c.set(20);
    c.show();

    C u;
    u.a = 65;
    cout << "Union as int: " << u.a << endl;
    cout << "Union as char: " << u.b << endl; // prints 'A'
    return 0;
}
