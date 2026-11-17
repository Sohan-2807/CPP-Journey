#include<iostream>
using namespace std;

int main(){
    int rows, cols;
    cout<<"Enter rows and columns: ";
    cin>>rows>>cols;

    // Dynamically allocating array of pointers
    int **arr = new int*[rows];

    // Allocating memory for each row
    for(int i = 0; i < rows; i++){
        arr[i] = new int[cols];
    }

    cout<<"Enter elements of the matrix:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix elements:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Deallocating memory for each row
    for(int i = 0; i < rows; i++){
        delete[] arr[i];
    }

    // Deallocating array of pointers
    delete[] arr;
    arr = NULL;

    return 0;
}
