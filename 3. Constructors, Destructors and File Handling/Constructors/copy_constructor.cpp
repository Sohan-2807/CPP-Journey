#include <iostream>
using namespace std;

class DynamicArray {
    int* data;
    int size;

public:
    DynamicArray(int s) : size(s) {
        data = new int[size];
        for (int i = 0; i < size; i++) data[i] = i * 10;
        cout << "Constructor: Allocated array of size " << size << endl;
    }

    // Deep Copy Constructor
    DynamicArray(const DynamicArray& other) : size(other.size) {
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
        cout << "Copy Constructor: Deep copy performed for size " << size << endl;
    }

    ~DynamicArray() {
        delete[] data;
        cout << "Destructor: Deallocated array of size " << size << endl;
    }

    void display() const {
        for (int i = 0; i < size; i++) cout << data[i] << " ";
        cout << endl;
    }
};

int main() {
    cout << "Creating original object a1:" << endl;
    DynamicArray a1(5);
    a1.display();

    cout << "\nCreating copy object a2 via copy constructor:" << endl;
    DynamicArray a2 = a1;
    a2.display();

    return 0;
}
