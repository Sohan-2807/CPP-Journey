#include<iostream>
using namespace std;

class Student{
    protected:
    int roll;
};

class Test:protected Student{
    protected:
    int t1,t2;
};

class Result:protected Test{
    protected:
    int score;
    public:
    void getdata(){
        cout<<"Enter Rollno, test scores :";
        cin>>roll>>t1>>t2;
        cout<<"Enter score: ";
        cin>>score;
    }
    void showData(){
        cout<<"Rollno is: "<<roll<<endl;
        cout<<"Total is: "<<t1+t2+score<<endl;
    }
};

int main(){
    Result r;
    r.getdata();
    r.showData();
    return 0;
}