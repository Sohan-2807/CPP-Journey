#include<iostream>
using namespace std;
void fun(int a){
try{
if(a==0) throw 'Z';
else cout<<"Valid input"<<endl;

}
catch(char){
cout<<"Exception occured!"<<endl;
throw;

}

}
int main(){
int a;
cout<<"Enter a number";
cin>>a;
try{
fun(a);
}
catch(char c){
cout<<"Caught rethrown exception in main: "<<c<<endl;
}
}
