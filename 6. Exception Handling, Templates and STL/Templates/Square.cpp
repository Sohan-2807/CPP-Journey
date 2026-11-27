#include<iostream>
using namespace std;
template<class T>
void square(T a){
    cout<<"Square of "<<a<<" is: "<<a*a<<endl;
}

int main(){
    square(2);
    square(2.2);
}