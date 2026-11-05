#include<iostream>
using namespace std;

class employee{
    int eid;
    int sal;
    public:
    employee(int eid, int sal){
        cout << "Employee created" << endl;
        this->eid = eid;
        this->sal = sal;
    }
    void showEmp(){
        cout << "Details: " << eid << " " << sal << endl;
    }
    ~employee(){
        cout << "Employee destroyed" << endl;
    }
};

class company{
    public:
    // Composition: company directly owns employee (not a pointer/reference)
    employee emp;

    // Member initializer list to construct the owned employee object
    company(int id, int s) : emp(id, s){
        cout << "Company created" << endl;
    }

    void showCompany(){
        emp.showEmp();
    }

    ~company(){
        cout << "Company destroyed" << endl;
    }
};

int main(){
    {
        // When company is created, its employee is created with it
        company c1(101, 50000);
        c1.showCompany();
    } // When company goes out of scope, the employee is destroyed with it

    cout << "End of block" << endl;

    return 0;
}

