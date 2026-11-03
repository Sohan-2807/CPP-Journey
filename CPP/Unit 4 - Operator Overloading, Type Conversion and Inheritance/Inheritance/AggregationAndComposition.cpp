#include<iostream>
using namespace std;

// Composition: strong "Has-A" (engine cannot exist without car)
class Engine {
public:
    void start() { cout << "Engine started" << endl; }
};

class Car {
    Engine e; // composed member (destroyed when Car is destroyed)
public:
    void drive() { e.start(); }
};

// Aggregation: weak "Has-A" (teacher exists independently of department)
class Teacher {
public:
    string name;
    Teacher(string n) { name = n; }
};

class Dept {
    Teacher *t; // pointer reference (does not own teacher lifecycle)
public:
    void setTeacher(Teacher *teacher) { t = teacher; }
    void show() { cout << "Teacher: " << t->name << endl; }
};

int main() {
    Car c;
    c.drive();

    Teacher t1("John");
    Dept d;
    d.setTeacher(&t1);
    d.show();
    return 0;
}
