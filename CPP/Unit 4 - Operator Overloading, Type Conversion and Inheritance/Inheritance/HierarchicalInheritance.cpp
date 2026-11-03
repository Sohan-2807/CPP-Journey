#include<iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "Eating food..." << endl; }
};

class Dog : public Animal { // child 1
public:
    void bark() { cout << "Dog barks" << endl; }
};

class Cat : public Animal { // child 2 (hierarchical inheritance: 1 base -> multiple children)
public:
    void meow() { cout << "Cat meows" << endl; }
};

int main() {
    Dog d;
    Cat c;
    d.eat();
    d.bark();
    c.eat();
    c.meow();
    // d.meow(); // error: siblings do not share methods
    return 0;
}
