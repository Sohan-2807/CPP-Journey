#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
    int rollno;
    char name[30];
    float marks;

public:
    void getdata() {
        cout << "Enter roll, name, marks: ";
        cin >> rollno >> name >> marks;
    }

    void showData() {
        cout << "Rollno: " << rollno
             << " Name: " << name
             << " Marks: " << marks << endl;
    }

    int getRollNo() {
        return rollno;
    }
};

int main() {
    int n,roll;
    cout << "Enter number of students: ";
    cin >> n;
    

    Student* s = new Student[n];

    string file1 = "students.dat";

    // Writing into file
    fstream fout(file1, ios::out | ios::binary);

    for (int i = 0; i < n; i++) {
        s[i].getdata();
        fout.write((char*)&s[i], sizeof(s[i]));
    }

    fout.close();

    // Reading from file
    fstream fin(file1, ios::in | ios::binary);

    Student temp;

    while (fin.read((char*)&temp, sizeof(temp))) {
        temp.showData();
    }


    fin.close();
    cout<<"Enter roll no: ";
    cin>>roll;
    fstream fin1(file1, ios::in | ios::binary);
    for(int i = 0;i<n;i++){
        if(roll==s[i].getRollNo()){
            s[i].showData();
        }
        else{
            cout<<"Record not found"<<endl;
            return 0;
        }
    }

    delete[] s;

    return 0;
}