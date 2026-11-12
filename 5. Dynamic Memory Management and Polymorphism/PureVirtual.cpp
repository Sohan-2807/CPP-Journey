#include<iostream>
using namespace std;
class geo{
    virtual void calArea()=0;
};
class Rectangle{
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
class circle{
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
    r.calArea();
    circle c;
    c.getdata();
    c.calArea();
    return 0;
}