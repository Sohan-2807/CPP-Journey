#include<iostream>
using namespace std;

class DynamicArray{
    int *arr;
    int size;
    public:
    // Dynamic constructor: allocates memory on heap
    DynamicArray(int s){
        size = s;
        arr = new int[size];
        cout<<"Dynamic constructor allocated "<<size<<" elements on heap\n";
    }
    void input(){
        cout<<"Enter "<<size<<" integers: ";
        for(int i = 0; i < size; i++){
            cin>>arr[i];
        }
    }
    void display(){
        cout<<"Elements: ";
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    ~DynamicArray(){
        delete[] arr; // Deallocating heap memory
        cout<<"Destructor deallocated heap memory\n";
    }
};

int main(){
    DynamicArray d(4);
    d.input();
    d.display();

    return 0;
}
