#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base constructor\n";
    }
    // Pure virtual destructor makes class abstract
    virtual ~Base() = 0;
};

// Pure virtual destructor MUST have a function body defined outside
Base::~Base(){
    cout<<"Base pure virtual destructor\n";
}

class Derived: public Base{
    public:
    Derived(){
        cout<<"Derived constructor\n";
    }
    ~Derived(){
        cout<<"Derived destructor\n";
    }
};

int main(){
    // Base b; // Compile Error: Base is abstract

    Base *p = new Derived();
    delete p; // Calls Derived destructor first, then Base destructor

    return 0;
}
