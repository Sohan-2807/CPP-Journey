#include<iostream>
using namespace std;

class Academics{
    public:
    int score;
    public:
    void getscore(){
        cout<<"\nEnter Score: ";
        cin>>score;
    }
};

class Sports{
    public:
    int score;
    public:
    void getscore(){
        cout<<"\nEnter Sports score: ";
        cin>>score;
    }
};

class Result:public Academics,public Sports{
    public:
    void showresult(){
        // Academics::getscore();
        // Sports::getscore();
        cout<<"\nTotal score is: "<<Academics::score+Sports::score;
    }
};

int main(){
    Result r;
    r.Academics::getscore();
    r.Sports::getscore();
    r.showresult();
    return 0;
}