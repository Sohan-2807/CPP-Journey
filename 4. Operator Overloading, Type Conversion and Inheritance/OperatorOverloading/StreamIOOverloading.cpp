#include <iostream>
using namespace std;

// Demonstrates overloading stream insertion (<<) and extraction (>>) operators
class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Overloading extraction operator '>>' to take input via cin
    // cin >> c calls operator>>(cin, c)
    friend istream& operator>>(istream &in, Complex &c) {
        cout << "Enter real part: ";
        in >> c.real;
        cout << "Enter imaginary part: ";
        in >> c.imag;
        return in; // returns stream reference for chaining (cin >> c1 >> c2)
    }

    // Overloading insertion operator '<<' to display output via cout
    // cout << c calls operator<<(cout, c)
    friend ostream& operator<<(ostream &out, const Complex &c) {
        out << c.real << " + " << c.imag << "i";
        return out; // returns stream reference for chaining (cout << c << endl)
    }
};

int main() {
    Complex c1, c2;

    cout << "--- Input for c1 ---" << endl;
    cin >> c1; // calls overloaded >>

    cout << "--- Input for c2 ---" << endl;
    cin >> c2; // calls overloaded >>

    cout << "\nYou entered:" << endl;
    cout << "c1 = " << c1 << endl; // calls overloaded <<
    cout << "c2 = " << c2 << endl;

    return 0;
}
