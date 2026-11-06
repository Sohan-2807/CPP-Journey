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
        while(fin.get(s)){
            cout<<s;
        }
    }
    else{
        cout<<"\n Operation failed";
    }
    fin.close();
}