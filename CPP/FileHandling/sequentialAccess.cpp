#include<iostream>
#include<fstream>
using namespace std;
class Student{
    int roll;
    char name[20];
    public:
    void getdata(){
        cout<<"enter Roll & name"<<endl;
        cin>>roll;
        cin>>name;
    }
    void showdata(){
        cout<<"Roll :"<<roll<<" Name :"<<name;
    }
};
int main(){
    ofstream fout("Data",ios::binary);
    Student s;
    Student ob;
    s.getdata();
    fout.write((char*)&s,sizeof(s));
    fout.close();
    ifstream fin("Data");
    fin.read((char*)&ob,sizeof(ob));
    fin.close();
    ob.showdata();
    return 0;
}