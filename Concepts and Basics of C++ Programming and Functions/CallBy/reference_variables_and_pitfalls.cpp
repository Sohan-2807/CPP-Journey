#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int &ref = a; // reference must be initialized

    ref = 20; // modifies a directly
    cout << "a: " << a << ", ref: " << ref << endl;

    int b = 50;
    ref = b; // copies b value into a, does NOT re-bind ref to b
    cout << "After ref=b -> a: " << a << ", b: " << b << endl;

    // int &r; // error: uninitialized reference
    // int &r = 100; // error: cannot bind non-const to literal
    const int &cr = 100; // ok: const reference
    cout << "cr: " << cr << endl;
    return 0;
}
