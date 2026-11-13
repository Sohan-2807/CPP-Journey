#include<iostream>
#include <string>
using namespace std;

class Student{
    int roll;
    string name;
    int *marks;
    int n;
    public:
    Student(int r, string sname,int count){
        roll = r;
        name = sname;
        n = count;
        marks = new int[n];
    }
    void getmarks(){
        cout<<"Enter "<<n<<" Marks: ";
        for(int i = 0;i<n;i++){
            cin>>marks[i];
        }
    }
    void showData(){
        cout<<"Roll: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        for(int i = 0;i<n;i++){
            cout<<"Marks of "<<i+1<<": "<<marks[i]<<" ";
        }
    }
    void getmax(){
        cout<<"\nThe highest mark is: ";
        int max = marks[0];
        for(int i = 1;i<n;i++){
            if(max<marks[i]){
                max = marks[i];
            }
        }
        cout<<max;
    }

};

int main(){
    Student ob(101, "Alice", 3);
    ob.getmarks();
    ob.showData();
    ob.getmax();

}