#include<iostream>
using namespace std;
class A{
    protected:
    int x;
};
class B:virtual public A{
    protected:
    int y;
};
class C:virtual public A{
    protected:
    int z;
};
class D:public B, public C{
    public:
    int sum;
    void getValues(){
        cout<<"Enter x,y,z: ";
        cin>>x>>y>>z;
    }
    void showData(){
        cout<<"Sum: "<<x+y+z;
    }
};

int main(){
    D d;
    d.getValues();
    d.showData();
}