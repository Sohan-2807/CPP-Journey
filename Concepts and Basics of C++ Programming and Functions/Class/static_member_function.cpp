#include<iostream>
using namespace std;

class Demo {
    static int count; // static data member
    int id;
public:
    Demo(int i) {
        id = i;
        count++;
    }
    static void showCount() { // static member function
        cout << "Count: " << count << endl;
        // cout << id; // error: cannot access non-static member (no 'this' pointer)
    }
};

int Demo::count = 0; // define outside class

int main() {
    Demo::showCount(); // call without object
    Demo d1(101), d2(102);
    Demo::showCount(); // prints 2
    return 0;
}
