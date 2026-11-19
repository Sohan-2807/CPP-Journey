#include<iostream>
using namespace std;

// Abstract Base Class
class Shape{
    public:
    virtual void calArea() = 0; // Pure virtual function
    virtual ~Shape(){}          // Virtual destructor
};

class Rectangle: public Shape{
    int l, b;
    public:
    Rectangle(int len, int br){
        l = len;
        b = br;
    }
    void calArea(){
        cout<<"Rectangle Area: "<<l * b<<endl;
    }
};

class Circle: public Shape{
    int r;
    public:
    Circle(int rad){
        r = rad;
    }
    void calArea(){
        cout<<"Circle Area: "<<3.14 * r * r<<endl;
    }
};

int main(){
    // Array of base class pointers
    Shape *arr[2];
    arr[0] = new Rectangle(5, 4);
    arr[1] = new Circle(3);

    // Runtime polymorphism via loop
    for(int i = 0; i < 2; i++){
        arr[i]->calArea();
    }

    // Cleanup
    for(int i = 0; i < 2; i++){
        delete arr[i];
    }

    return 0;
}
