#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;
    public:
    // 1. Default constructor
    Rectangle(){
        length = 0;
        breadth = 0;
    }
    // 2. Single-parameter constructor (square)
    Rectangle(int side){
        length = side;
        breadth = side;
    }
    // 3. Two-parameter constructor
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    void showArea(){
        cout<<"Area is: "<<length * breadth<<endl;
    }
};

int main(){
    Rectangle r1;          // Calls default constructor
    Rectangle r2(5);       // Calls single-parameter constructor
    Rectangle r3(4, 6);    // Calls two-parameter constructor

    r1.showArea();
    r2.showArea();
    r3.showArea();

    return 0;
}
