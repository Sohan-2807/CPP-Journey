#include<iostream>
using namespace std;

int main(){
    // Dynamically allocating single variable
    int *p = new int;
    *p = 25;
    cout<<"Value of dynamically allocated integer: "<<*p<<endl;
    delete p; // Deallocating memory
    p = NULL; // Avoiding dangling pointer

    // Dynamically allocating 1D array
    int n;
    cout<<"\nEnter size of dynamic array: ";
    cin>>n;

    int *arr = new int[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Array elements: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    delete[] arr; // Deallocating array memory
    arr = NULL;

    return 0;
}
