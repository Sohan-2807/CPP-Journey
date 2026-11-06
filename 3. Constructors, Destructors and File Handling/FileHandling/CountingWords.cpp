#include<iostream>
#include<fstream>

using namespace std;
int main(){
    ofstream f("Test.txt");
    f<<"Learning FileHandling \nRead function";
    f.close();
    string s;
    int count = 0;
    ifstream fin("Test.txt");
    if(fin){
        while(fin>>s){
            count++;
            cout<<count<<": "<<s<<endl;
        }
        cout<<"Total:"<<count;
    }
    else{
        cout<<"\n Operation failed";
    }
}