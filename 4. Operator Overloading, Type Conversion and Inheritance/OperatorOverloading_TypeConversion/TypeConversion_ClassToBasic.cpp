#include<iostream>
using namespace std;

class Time {
    int hrs, mins;
public:
    Time(int h, int m) { hrs = h; mins = m; }
    operator int() { // casting operator: class (Time) -> basic (int)
        return (hrs * 60) + mins;
    }
};

int main() {
    Time t(2, 15);
    int totalMinutes = t; // class to basic type conversion
    cout << "Total minutes: " << totalMinutes << endl;
    return 0;
}
