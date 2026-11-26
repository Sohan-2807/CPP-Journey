// write a program to take an array of marks as input;
//  if the marks entered are less than 0 or >100 
//  throw an exception and handle it.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of subjects: ";
    cin>>n;
    int marks[n];

    try {
        cout << "Enter n marks: ";
        for (int i = 0; i < n; i++) {
            cin >> marks[i];
            if (marks[i] < 0 || marks[i] > 100) {
                throw marks[i];
            }
        }

        cout << "Entered marks: ";
        for (int i = 0; i < n; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    } catch (int x) {
        cout << "Invalid mark: " << x << " (must be 0 to 100)" << endl;
    }

    return 0;
}
