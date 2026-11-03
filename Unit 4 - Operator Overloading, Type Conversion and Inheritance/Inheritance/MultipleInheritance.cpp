#include<iostream>
using namespace std;

class Academics{
    protected:
    int score;
    public:
    void getscore(){
        cout<<"\nEnter Score: ";
        cin>>score;
    }
};

class Sports{
    protected:
    int sscore;
    public:
    void getsports(){
        cout<<"\nEnter Sports score: ";
        cin>>sscore;
    }
};

class Result:public Academics,public Sports{
    public:
    void showresult(){
        getscore();
        getsports();
        cout<<"\nTotal score is: "<<score+sscore;
    }
};

int main(){
    Result r;
    r.showresult();
    return 0;
}