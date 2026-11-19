#include<iostream>
using namespace std;

class Person{
    string name;
    public:
    void getper(){
        cout<<"Enter name: ";
        cin>>name;
    }
    void showper(){
        cout<<"Name is: "<<name<<endl;

    }
};
class Student:public Person
{
    int roll;
    public:
    void getst(){
        cout<<"Enter rollno: ";
        cin>>roll;
    }
    void showst(){
        cout<<"Roll no is: "<<roll<<endl;
    }
};
int main(){
    Student ob;
    ob.getper();
    ob.showper();
    ob.getst();
    ob.showst();
    return 0;
}