#include<iostream>
using namespace std;

int x = 100; // global x

int main() {
    int x = 20; // local x shadows global x
    cout << "Local x: " << x << endl;
    cout << "Global x using :: : " << ::x << endl; // access global

    {
        int x = 5; // block x shadows local x
        cout << "Inner x: " << x << endl;
        cout << "Global x inside block: " << ::x << endl; // skips to global, cannot access outer local
    }
    return 0;
}
