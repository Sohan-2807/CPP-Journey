#include<iostream>
using namespace std;

class Student{
    int roll;
    string name;
    int *marks;
    int n;
    public:
    Student(int r, string n,int count){
        roll = r;
        name = n;
        n = count;
        marks = new int[n];
    }
    void getmarks(){
        cout<<"Enter "<<n<<" Marks: "
        for(int i = 0;i<n;i++){
            cin>>marks[i];
        }
    }
    void showData(){
        cout<<"Roll: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        for(int i = 0;i<n;i++){
            cout<<"Marks: "<<marks[i]<<" ";
        }
    }

};

int main(){

}