// write a program to take input an array of marks from an user and 
// write it into file using write function n display the marks of every student after adding bonus marks of 10;

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    int marks[n];
    for(int i = 0;i<n;i++){
        cin>>marks[i];
    }
    int arr[10] = {0};
    fstream file;
    file.open("temp.txt",ios::out|ios::binary);
    file.write((char *)marks,sizeof(arr));
    file.close();
    file.open("temp.txt",ios::in|ios::binary);
    file.read((char*)arr, sizeof(arr));
    cout<<"\nmarks after reading and adding bouns marks: ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]+10<<" ";
        file.close();
    }

}