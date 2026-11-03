#include<iostream>
using namespace std;

class Test {
    int x;
public:
    Test(int x) {
        this->x = x; // 'this->x' is data member, 'x' is parameter
    }
    Test& setX(int x) {
        this->x = x;
        return *this; // return current object for chaining
    }
    void show() {
        cout << "x: " << x << " (address: " << this << ")" << endl;
    }
};

int main() {
    Test t(10);
    t.show();
    t.setX(30).show(); // method chaining
    return 0;
}
