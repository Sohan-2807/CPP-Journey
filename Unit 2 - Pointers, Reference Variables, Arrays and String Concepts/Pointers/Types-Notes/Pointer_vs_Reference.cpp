#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a; // pointer has own address, can be null
    int &r = a;  // reference shares address with a, cannot be null

    cout << "p address:  " << &p << " -> points to: " << p << endl;
    cout << "r address:  " << &r << " == a address: " << &a << endl;

    int b = 50;
    p = &b; // pointer can point to another variable
    r = b;  // copies b value into a, cannot re-bind reference
    cout << "a: " << a << ", b: " << b << ", *p: " << *p << endl;

    p = nullptr; // pointer can be null
    // int &nullRef; // error: references cannot be null or uninitialized
    return 0;
}
