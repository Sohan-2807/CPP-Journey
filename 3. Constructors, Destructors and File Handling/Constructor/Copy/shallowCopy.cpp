#include<iostream>
using namespace std;

class Reactangle{
    int *l;
    int *b;
    public:
    Reactangle(){
        l = new int(8);
        b = new int(4);
    }
    Reactangle(Reactangle &ob){
        l = ob.l;
        b = ob.b;
    }
    void update(){
        *l = 23;
        *b = 67;
    }
    void showdata(){
        cout<<"l = "<<*l<<" b = "<<*b<<endl;
    }
};

int main(){
    Reactangle ob;
    ob.showdata();
    Reactangle r(ob);
    r.showdata();
    ob.update();
    r.showdata();    //r.showdata changes as it is copying the address rather than value;
}