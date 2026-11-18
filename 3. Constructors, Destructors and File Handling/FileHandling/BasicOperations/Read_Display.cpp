// write a table of number n in file and read and display on screen;
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    ofstream multi("Multiplication.txt");
    
    for(int i = 1;i<=10;i++){
        multi<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
    multi.close();
    ifstream disp("Multiplication.txt");
    char c;
    if(disp){
        while(disp.get(c)){
            cout<<c;
        }
    }disp.close();
    
}