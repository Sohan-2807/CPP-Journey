#include<iostream>
using namespace std;
class InsuffBal{
    public:
    InsuffBal(int bal){
        cout<<"Low balance: "<<bal<<endl;
    }
    void details(){
        cout<<"Amount entered is greater than balance...."<<endl;
    }
};

class Account{
    int bal;
    public:
    Account(int v){
        bal = v;
    }
    void withdraw(int x){
        try{
            if(bal>x){
                cout<<"Sucessful; balance is: "<<bal-x<<endl;
            }
            else{
                throw(InsuffBal(bal));
            }
        }
        catch(InsuffBal e){
            e.details();
        }
    }
};

int main(){
    int b;
    cout<<"Enter balance: ";
    cin>>b;
    int w;
    cout<<"Enter amount to be withdrawn: ";
    cin>>w;
    Account a(b);
    a.withdraw(w);

}