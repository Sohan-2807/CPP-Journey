#include<iostream>
using namespace std;

class Complex {
    int r, i;
public:
    Complex(int real = 0, int imag = 0) { r = real; i = imag; }
    Complex operator+(Complex c) { // binary +
        return Complex(r + c.r, i + c.i);
    }
    friend ostream& operator<<(ostream &out, Complex c) { // stream << as friend
        out << c.r << " + " << c.i << "i";
        return out;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2; // c1.operator+(c2)
    cout << "Sum: " << c3 << endl;
    return 0;
}
