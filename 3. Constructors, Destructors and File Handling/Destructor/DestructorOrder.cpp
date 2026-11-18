#include<iostream>
using namespace std;

class Demo{
    int id;
    public:
    Demo(int i){
        id = i;
        cout<<"Constructor called for object "<<id<<endl;
    }
    ~Demo(){
        cout<<"Destructor called for object "<<id<<endl;
    }
};

Demo globalObj(1); // Global object: destroyed at the very end of program

int main(){
    cout<<"Inside main()\n";

    Demo localObj1(2);
    Demo localObj2(3);

    {
        cout<<"Entering inner block\n";
        Demo blockObj(4);
        cout<<"Exiting inner block\n";
    } // blockObj destroyed here (LIFO)

    cout<<"End of main()\n";
    return 0;
} // localObj2 destroyed first, then localObj1, then globalObj
