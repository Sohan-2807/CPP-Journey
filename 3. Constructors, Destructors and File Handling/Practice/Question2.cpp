#include<iostream>
using namespace std;

class Rectangle{
    int length, breadth;
    
    public:
    static int count;
    Rectangle(){
        length = 0;
        breadth = 0;
        count++;
    }
    Rectangle(int l, int b){
        length = l;
        breadth = b;
        count++;
    }
    Rectangle(int s){
        length = s;
        breadth = s;
        count++;
    }
    Rectangle(Rectangle &r1){
        length = r1.length;
        breadth = r1.breadth;
        count++;
    }

    int area(){
        return length*breadth;
    }
    void display(){
        cout<<"Length: "<<length<<" Breadth: "<<breadth<<" Area: "<<area()<<endl;
    }
    ~Rectangle(){
        count--;
        cout<<"Destructor called......."<<count<<endl;

    }
};
int Rectangle::count = 0;

int main(){
    Rectangle r1;
    Rectangle r2(10,5);
    Rectangle r3(7);
    Rectangle r4(r3);

    r1.display();
    r2.display();
    r3.display();
    r4.display();

}
