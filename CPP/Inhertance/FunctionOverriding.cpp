// write a program Employees with calSal no of days * 2000 + incentive with child class
//  Contract employee with calsal with no of hrs*700 + bonus.

#include<iostream>
using namespace std;

class Employees{
    public:
    int days = 0;
    int incentive = 0;
    
    void getdata(){
        cout<<"Enter days: ";
        cin>>days;
        cout<<"Enter incentive: ";
        cin>>incentive;
    }
    void getsal(){
        cout<<"Total salary is: "<<days*2000+incentive;
    }

};

class ContEmp:public Employees{
    int hours,bonus;
    public:
    void getdata(){
        Employees::getdata();
        cout<<"\nEnter number of hours: ";
        cin>>hours;
        cout<<"Enter bonus: ";
        cin>>bonus;
    }
    void getsal(){
        cout<<"Total salary in contract is: "<<hours*700+bonus;
    }
};

int main(){
    Employees ob;
    ContEmp ob2;
    ob2.getdata();
    ob.getsal();
    ob2.getsal();
    return 0;

}