#include<iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout("Test.txt");
    fout<<"Learning FileHandling \nRead function";
    cout<<fout.tellp()<<endl;
    fout.close();
    ifstream fin("Test.txt");
    string c;
    fin>>c;
    cout<<"\nString read is: "<<c<<endl;
    cout<<"The next position of pointer is: "<<fin.tellg()<<endl;
}