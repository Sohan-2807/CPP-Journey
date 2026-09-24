#include <iostream>
using namespace std;

enum days {
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {

    days day = Tuesday;

    switch (day) {
        case Monday:
            cout << "Monday";
            break;

        case Tuesday:
            cout << "Tuesday";
            break;

        case Wednesday:
            cout << "Wednesday";
            break;

        case Thursday:
            cout << "Thursday";
            break;

        case Friday:
            cout << "Friday";
            break;

        case Saturday:
            cout << "Saturday";
            break;
    }

    return 0;
}