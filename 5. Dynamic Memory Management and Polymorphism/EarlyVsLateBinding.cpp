#include<iostream>
using namespace std;

class Base{
    public:
    void print(){ // Early binding (default non-virtual)
        cout<<"Base print (Early Binding)\n";
    }
    virtual void show(){ // Late binding (virtual)
        cout<<"Base show (Late Binding)\n";
    }
};

class Derived: public Base{
    public:
    void print(){
        cout<<"Derived print\n";
    }
    void show(){
        cout<<"Derived show\n";
    }
};

int main(){
    Base *ptr;
    Derived d;
    ptr = &d; // Base pointer pointing to derived object

    // Resolved at compile time based on pointer type (Base)
    ptr->print(); 

    // Resolved at runtime based on actual object type (Derived)
    ptr->show();  

    return 0;
}
