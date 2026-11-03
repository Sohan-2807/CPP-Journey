#include<iostream>
#include<fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[20];
    void show() { cout << roll << " " << name << endl; }
};

int main() {
    Student s1 = {101, "Alice"}, s2;

    ofstream out("stud.dat", ios::binary);
    out.write((char*)&s1, sizeof(s1)); // write object
    out.close();

    ifstream in("stud.dat", ios::binary);
    in.read((char*)&s2, sizeof(s2));   // read object
    in.close();

    s2.show();
    return 0;
}
