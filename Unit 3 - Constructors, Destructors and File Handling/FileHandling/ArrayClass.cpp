#include<iostream>
#include<fstream>
using namespace std;

class Student{
    public:
    int roll;
    char name[20];
    void getdata(){
        cout<<"Enter roll number and name: ";
        cin>>roll>>name;
    }
    void showdata(){
        cout<<roll<<" "<<name;
    }
};
int main(){
    Student arr[5];
    for(int i = 0;i<5;i++){
        arr[i].getdata();
    }
    ofstream fout("Array",ios::binary);
    fout.write((char*)arr,sizeof(arr));
    fout.close();
    Student s;
    ifstream fin("Array");
    Student a[5];
    fin.read((char*)a,sizeof(a));
    fin.close();
    for(int i = 0;i<5;i++){
        a[i].showdata();
        cout << endl;
    }
}