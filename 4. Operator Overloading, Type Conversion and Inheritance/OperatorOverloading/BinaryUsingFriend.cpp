#include <iostream>
using namespace std;

// Demonstrates why Friend Functions are used for Binary Operator Overloading:
// They allow commutative operations like: object + int AND int + object!
class Number {
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    void display() const {
        cout << "Value = " << value << endl;
    }

    // 1. Overloading '+' between two Number objects using Friend function
    friend Number operator+(const Number &n1, const Number &n2) {
        return Number(n1.value + n2.value);
    }

    // 2. Overloading '+' for: Number + int (e.g. n1 + 10)
    friend Number operator+(const Number &n, int val) {
        return Number(n.value + val);
    }

    // 3. Overloading '+' for: int + Number (e.g. 10 + n1)
    // NOTE: This CANNOT be done using a member function because the left operand is a primitive int!
    friend Number operator+(int val, const Number &n) {
        return Number(val + n.value);
    }
};

int main() {
    Number n1(20), n2(15);

    cout << "n1: "; n1.display();
    cout << "n2: "; n2.display();
    cout << "---------------------------------" << endl;

    // Case 1: Object + Object
    Number sum1 = n1 + n2;
    cout << "n1 + n2: "; sum1.display();

    // Case 2: Object + int
    Number sum2 = n1 + 10;
    cout << "n1 + 10: "; sum2.display();

    // Case 3: int + Object (Works only because of Friend function!)
    Number sum3 = 10 + n1;
    cout << "10 + n1: "; sum3.display();

    return 0;
}
