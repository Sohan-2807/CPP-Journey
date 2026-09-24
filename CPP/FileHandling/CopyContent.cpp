#include<iostream>
#include<fstream>

using namespace std;
int main(){
    ofstream f("Test.txt");
    f<<"Learning FileHandling \nRead function";
    f.close();
    char s;
    ifstream fin("Test.txt");
    ofstream f1("Destination.txt");
    if(fin){
        while(fin.get(s)){
        f1<<s;
        }
    }
    else{
        cout<<"\n Operation failed";
    }
    fin.close();
    f1.close();
    ifstream fin1("Destination.txt");
    if(fin1){
        while(fin1.get(s)){
        cout<<s;
        }
    }
    else{
        cout<<"\n Operation failed";
    }
}