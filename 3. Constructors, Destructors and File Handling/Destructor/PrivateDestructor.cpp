#include<iostream>
using namespace std;

class Test{
    // Private destructor prevents object creation on stack
    ~Test(){
        cout<<"Private destructor called\n";
    }
    public:
    Test(){
        cout<<"Constructor called\n";
    }
    // Public member function to safely delete dynamic object
    void destroy(){
        delete this;
    }
};

int main(){
    // Test t; // Compile Error: Destructor is private, cannot allocate on stack!

    // Can only be created on heap dynamically
    Test *t = new Test();
    t->destroy(); // Safely calls private destructor

    return 0;
}
