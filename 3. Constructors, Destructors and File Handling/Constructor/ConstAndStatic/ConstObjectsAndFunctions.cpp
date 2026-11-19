#include<iostream>
using namespace std;

class Demo{
    int val;
    public:
    Demo(int v){
        val = v;
    }
    // Non-const member function: can modify members
    void setVal(int v){
        val = v;
    }
    // Const member function: cannot modify members, can be called by const objects
    void showVal() const {
        cout<<"Value: "<<val<<endl;
    }
};

int main(){
    Demo d1(10);
    d1.setVal(20);
    d1.showVal();

    // Const object: initialized via constructor, cannot be modified
    const Demo d2(50);
    d2.showVal(); // Allowed: const member function
    // d2.setVal(100); // Compile Error: const object cannot call non-const member function!

    return 0;
}
