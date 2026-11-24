#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() const {
        cout << "Drawing a generic shape." << endl;
    }
    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a Circle (radius: 5)." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a Rectangle (width: 4, height: 6)." << endl;
    }
};

int main() {
    Shape* shapes[] = { new Circle(), new Rectangle(), new Shape() };

    for (Shape* s : shapes) {
        s->draw();
        delete s;
    }

    return 0;
}
