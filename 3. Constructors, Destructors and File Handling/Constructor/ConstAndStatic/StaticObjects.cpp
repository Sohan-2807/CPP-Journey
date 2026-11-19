#include<iostream>
using namespace std;

class Demo{
    int id;
    public:
    Demo(int i){
        id = i;
        cout<<"Constructor called for Demo "<<id<<endl;
    }
    ~Demo(){
        cout<<"Destructor called for Demo "<<id<<endl;
    }
};

void test(){
    cout<<"\n-- Entering test() --\n";
    static Demo staticObj(1); // Constructed only once upon first execution
    Demo normalObj(2);        // Constructed every time test() is called
    cout<<"-- Exiting test() --\n";
} // normalObj destroyed here; staticObj persists until program termination

int main(){
    cout<<"First call to test():";
    test();

    cout<<"\nSecond call to test():";
    test();

    cout<<"\nEnd of main()\n";
    return 0;
}
