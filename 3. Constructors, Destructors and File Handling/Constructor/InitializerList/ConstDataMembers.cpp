#include<iostream>
using namespace std;

class Student{
    const int rollNo; // Const member: MUST be initialized in initializer list
    int &refAge;      // Reference member: MUST be initialized in initializer list
    int marks;
    public:
    // Initializer list is required for const and reference members
    Student(int r, int &a, int m) : rollNo(r), refAge(a), marks(m) {
        // rollNo = r; // Compile Error: cannot assign to const variable
    }
    void display(){
        cout<<"Roll No: "<<rollNo<<", Age: "<<refAge<<", Marks: "<<marks<<endl;
    }
};

int main(){
    int age = 20;
    Student s(101, age, 85);
    s.display();

    return 0;
}
