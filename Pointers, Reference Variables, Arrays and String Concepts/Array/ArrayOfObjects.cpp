#include<iostream>
using namespace std;

class Student {
    int roll;
    float marks;
public:
    Student() { roll = 0; marks = 0.0; } // default constructor required for array
    void get(int r, float m) { roll = r; marks = m; }
    void show() { cout << "Roll: " << roll << ", Marks: " << marks << endl; }
};

int main() {
    Student s[3]; // array of 3 objects
    s[0].get(1, 95.5);
    s[1].get(2, 88.0);
    s[2].get(3, 76.5);

    for (int i = 0; i < 3; i++) {
        s[i].show();
    }
    return 0;
}
