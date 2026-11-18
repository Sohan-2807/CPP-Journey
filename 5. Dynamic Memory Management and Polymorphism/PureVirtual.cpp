#include<iostream>
using namespace std;
class geo{
    public:
    virtual void calArea()=0;      //Abstract class;
};
class Rectangle: public geo{
    int l,b;
    public:
    void getdata(){
        cout<<"Enter values of l & b: ";
        cin>>l>>b;
    }
    void calArea(){
        cout<<"Area of rectangle is: "<<l*b<<endl;
    }
};
class circle: public geo{
    int r;
    public:
    void getdata(){
        cout<<"Enter radius of circle: ";
        cin>>r;
    }
    void calArea(){
        cout<<"Area of circle is: "<<3.14*r*r<<endl;
    }
};

int main(){
    Rectangle r;
    r.getdata();
    circle c;
    c.getdata();

    // Runtime polymorphism via base pointer
    geo *g = &r;
    g->calArea();
    g = &c;
    g->calArea();

    return 0;
}