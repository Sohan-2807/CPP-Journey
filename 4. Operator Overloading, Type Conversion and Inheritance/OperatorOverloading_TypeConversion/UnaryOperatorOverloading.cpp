#include<iostream>
using namespace std;

class Count {
    int val;
public:
    Count(int v = 0) { val = v; }
    void operator++() { ++val; }        // prefix: ++c
    void operator++(int) { val++; }     // postfix: c++ (dummy int differentiates)
    Count operator-() { return Count(-val); } // unary minus: -c
    void show() { cout << "Val: " << val << endl; }
};

int main() {
    Count c(5);
    ++c; // prefix
    c.show();
    c++; // postfix
    c.show();
    Count neg = -c;
    neg.show();
    return 0;
}
