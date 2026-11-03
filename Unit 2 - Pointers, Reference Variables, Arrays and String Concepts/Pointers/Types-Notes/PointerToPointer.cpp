#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;    // pointer to a
    int **pp = &p;  // pointer to pointer

    cout << "Value of a: " << a << endl;
    cout << "Using *p:    " << *p << endl;
    cout << "Using **pp:  " << **pp << endl; // double dereference

    **pp = 25; // changes a to 25
    cout << "New a: " << a << endl;
    return 0;
}
