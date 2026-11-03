#include<iostream>
using namespace std;

class Time {
    int hrs, mins;
public:
    Time() { hrs = mins = 0; }
    Time(int m) { // constructor converts basic (int) -> class (Time)
        hrs = m / 60;
        mins = m % 60;
    }
    void show() { cout << hrs << " hrs " << mins << " mins" << endl; }
};

int main() {
    int duration = 95;
    Time t = duration; // basic to class type conversion
    t.show();
    return 0;
}
