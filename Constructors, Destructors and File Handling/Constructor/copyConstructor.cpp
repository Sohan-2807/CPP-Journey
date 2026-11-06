#include<iostream>
using namespace std;

class Reactangle{
    int l,b;
    public:
    Reactangle(int a, int b){
        l = a;
        this->b = b;
        cout<<"Constructor called\n";
    }

    Reactangle(const Reactangle &r1){
        // cout<<"Copy is running\n";
        l=r1.l;
        b=r1.b;
    }

    void showarea(){
        cout<<"Area :"<<l*b<<endl;
    }
};

int main(){
    Reactangle r(10,20);
    r.showarea();

    Reactangle r2(r);
    r2.showarea();
    
    return 0;
}