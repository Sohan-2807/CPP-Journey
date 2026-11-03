#include<iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout("Test.txt",ios::app);
    fout<<"Learning FileHandling \nRead function";
    cout<<fout.tellp()<<endl;
    fout.seekp(50);
    fout<<" appended";
    fout.close();
    
}