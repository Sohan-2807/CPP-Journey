#include<iostream>
using namespace std;

class Base{
    public:
    virtual void display(){
        cout<<"Base class displayed\n";
    }
};

class Derived:public Base{
    public:
    void display(){
        cout<<"Child class displayed";
    }
};

int main(){
    Base b;
    Base *p = &b;
    p->display();
    Derived d;
    p = &d;
    p->display();
   }