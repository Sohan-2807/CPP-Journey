#include<iostream>
using namespace std;

class Reactangle{
    int l,b;
    public:
    Reactangle(int a, int b):l(a),b(b)
    {
        cout<<"Parameterised Constructor called..\n";
    }
    void showarea(){
        cout<<"Area :"<<l*b<<endl;
    }

};

int main(){
    Reactangle r1(10,20);
    r1.showarea();
    
    Reactangle r2(r1);
    r2.showarea();
}