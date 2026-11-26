#include<iostream>
using namespace std;
int main(){
    string name = "JAVA";
    try{
        cout<<name.at(34);
    }
    catch(out_of_range) {
        cout<<"Exception due to Invalid index\n";
    }
    cout<<"End od code";
}