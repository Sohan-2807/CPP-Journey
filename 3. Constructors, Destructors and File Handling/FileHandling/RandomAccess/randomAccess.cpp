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
    Student s2;
    Student ob;
    s.getdata();
    s2.getdata();
    fout.write((char*)&s,sizeof(s));
    fout.write((char*)&s2,sizeof(s2)); // Fixed: writing s2 instead of s
    fout.close();
    ifstream fin("Data",ios::binary);
    
    // To access the second object, we skip the size of one object from the beginning
    fin.seekg(sizeof(s), ios::beg); 
    
    fin.read((char*)&ob,sizeof(ob));
    fin.close();
    ob.showdata();
    return 0;
}