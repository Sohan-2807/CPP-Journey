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
    employee *emp;
    company(employee* e){
        cout << "Company created" << endl;
        emp = e;
    }
    ~company(){
        cout << "Company destroyed" << endl;
    }
};

int main(){
    employee e1(122, 4500);
    {
        company c1(&e1);
        c1.emp->showEmp();
    }
    cout << "End of block" << endl;

    return 0;
}
