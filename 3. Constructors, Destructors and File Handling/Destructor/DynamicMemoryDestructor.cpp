#include<iostream>
using namespace std;

class DynamicString{
    char *str;
    int size;
    public:
    DynamicString(int s){
        size = s;
        str = new char[size]; // Allocating memory dynamically
        cout<<"Memory allocated on heap ("<<size<<" bytes)\n";
    }
    void setString(){
        cout<<"Enter a word: ";
        cin>>str;
    }
    void showString(){
        cout<<"String is: "<<str<<endl;
    }
    ~DynamicString(){
        delete[] str; // Freeing heap memory to prevent memory leaks
        cout<<"Memory deallocated from heap\n";
    }
};

int main(){
    DynamicString s1(20);
    s1.setString();
    s1.showString();

    return 0;
} // s1 goes out of scope, destructor automatically frees heap memory
