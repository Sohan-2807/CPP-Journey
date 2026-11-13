#include<iostream>
using namespace std;

class Emp{
    int empid;
    string empname;
    public:
    void getdata(){
        cout<<"Enter id and name: ";
        cin>>empid>>empname;
    }
    void calSal() = 0;
};

class RegEmp:public Emp{
    int days;
    public:
    void getdays(){
        cout<<"Enter number of working days: ";
        cin>>days;
    }
    void calSal(){
        cout<<"Total salary is: "days*1000;
    }
};
class contEmp:public Emp{
    int hours;
    public:
    void gethours(){
        cout<<"Enter number of working hours: ";
        cin>>hours;
    }
    void calSal(){
        cout<<"Total salary is: "hours*750;
    }
};


int main(){
    
    RegEmp ob1;
    ob1.getdays();
    ob1.calSal();
    contEmp ob2;
    ob2.gethours();
    ob2.calSal();


}