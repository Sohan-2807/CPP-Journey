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
        // Reading until end of file is reached
        while(fin.get(s)){
            cout<<s;
        }
        if(fin.eof()){
            cout<<"\n[End of File (EOF) reached successfully]"<<endl;
        }
    }
    else{
        cout<<"\nOperation failed"<<endl;
    }
    fin.close();
    return 0;
}