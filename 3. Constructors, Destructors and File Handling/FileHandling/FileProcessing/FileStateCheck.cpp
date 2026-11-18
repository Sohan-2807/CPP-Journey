#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    // Attempting to open a non-existent file
    ifstream file("NonExistentFile.txt");

    // Checking stream state flags
    if(file.fail()){
        cout<<"file.fail(): Failed to open file (file does not exist)\n";
    }
    if(!file.good()){
        cout<<"file.good(): Stream is not in good state\n";
    }

    // Creating and writing to a valid file
    ofstream outfile("StateTest.txt");
    outfile<<"C++ File Handling Stream States";
    outfile.close();

    // Reading file until EOF
    ifstream infile("StateTest.txt");
    string word;
    while(infile>>word){
        // Reading word by word
    }

    if(infile.eof()){
        cout<<"file.eof(): End of file reached successfully\n";
    }

    // Resetting stream flags
    infile.clear();
    cout<<"file.clear(): Stream state flags cleared successfully\n";

    infile.close();
    return 0;
}
