#include<iostream>
using namespace std;

template<class T>
void maxi(T a, T b){
    cout<<"Maximum of "<<a<<" and "<<b<<" is: ";
    if(a>b){
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
    }
}
int main(){
    maxi(2,3);
    maxi(11,9);
}