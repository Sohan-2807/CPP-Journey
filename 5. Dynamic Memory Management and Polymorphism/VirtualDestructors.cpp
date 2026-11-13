#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Base const called "<<endl;
    }
    virtual ~Base(){
        cout<<"Base dest is called"<<endl;
    }
};

class Derived:public Base{
    public:
    Derived(){
        cout<<"derived const is called"<<endl;
    }
    ~Derived(){
        cout<<"Derived dest is called"<<endl;
    }
};

int main(){
    Base* p = new Derived();
    delete p;
}