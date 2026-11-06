#include<iostream>
using namespace std;

class Rectangle{
    int l,b;
    public:
    void getdata(){
        cout<<"Enter value of l & b: ";
        cin>>l>>b;
    }
    void showArea(){
        cout<<"Area is :"<<l*b<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter number of Rectangles: ";
    cin>>n;
    Rectangle * p = new Rectangle[n];
    for(int i = 0;i<n;i++){
        p[i].getdata();
    }
    for(int i = 0;i<n;i++){
        p[i].showArea();
    }
    return 0;
}