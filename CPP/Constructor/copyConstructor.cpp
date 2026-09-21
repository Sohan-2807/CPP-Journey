#include<iostream>
using namespace std;

class Reactangle{
    int l,b;
    public:
    Reactangle(int a, int b){
        l = a;
        b = b;
        cout<<"Constructor called\n";
    }

    Reactangle(Reactangle &r){
        l=r.l;
        b=r.b;
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
    
    return 0;
}