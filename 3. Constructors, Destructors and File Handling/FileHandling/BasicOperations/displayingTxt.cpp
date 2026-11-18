#include<iostream>
#include<fstream>

using namespace std;
int main(){
    ofstream f("Test.txt");
    f<<"Learning FileHandling \nRead function";
    f.close();
    char s;
    ifstream fin("Test.txt");
    if(fin){
        while(fin.get(s))      //We can use fin>>stringname; fin>>charname; getline(fin, stringname)   
        cout<<s;
        fin.close();
    }
    else{
        cout<<"\n Operation failed";
    }
}