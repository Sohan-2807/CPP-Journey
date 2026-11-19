#include<iostream>
using namespace std;

class Minute {
    int m;
public:
    Minute(int min = 0) { m = min; }
    int getMin() { return m; }
};

class Time {
    int hrs;
public:
    Time() { hrs = 0; }
    Time(Minute m) { // constructor in destination class converts Minute -> Time
        hrs = m.getMin() / 60;
    }
    void show() { cout << "Hours: " << hrs << endl; }
};

int main() {
    Minute m(120);
    Time t = m; // class to class conversion
    t.show();
    return 0;
}
