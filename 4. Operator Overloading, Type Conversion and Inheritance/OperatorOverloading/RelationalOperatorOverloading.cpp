#include <iostream>
using namespace std;

// Demonstrates overloading relational operators (==, <, >)
class Distance {
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }

    // Helper to get total distance in inches for easy comparison
    int toInches() const {
        return (feet * 12) + inches;
    }

    // Overloading equality operator '=='
    bool operator==(const Distance &d) const {
        return this->toInches() == d.toInches();
    }

    // Overloading less-than operator '<'
    bool operator<(const Distance &d) const {
        return this->toInches() < d.toInches();
    }

    // Overloading greater-than operator '>'
    bool operator>(const Distance &d) const {
        return this->toInches() > d.toInches();
    }

    void display() const {
        cout << feet << " ft " << inches << " in";
    }
};

int main() {
    Distance d1(5, 8);  // 5 ft 8 in = 68 inches
    Distance d2(6, 2);  // 6 ft 2 in = 74 inches
    Distance d3(5, 8);  // 5 ft 8 in = 68 inches

    cout << "d1: "; d1.display(); cout << endl;
    cout << "d2: "; d2.display(); cout << endl;
    cout << "d3: "; d3.display(); cout << endl;
    cout << "------------------------------------" << endl;

    // Testing '=='
    if (d1 == d3) {
        cout << "d1 is EQUAL to d3" << endl;
    } else {
        cout << "d1 is NOT equal to d3" << endl;
    }

    // Testing '<'
    if (d1 < d2) {
        cout << "d1 is LESS than d2" << endl;
    }

    // Testing '>'
    if (d2 > d1) {
        cout << "d2 is GREATER than d1" << endl;
    }

    return 0;
}
