#include <iostream>
#include <string>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T1, typename T2>
void printPair(T1 first, T2 second) {
    cout << "Pair: [" << first << ", " << second << "]" << endl;
}

int main() {
    cout << "Max of 10 and 25: " << findMax(10, 25) << endl;
    cout << "Max of 3.14 and 2.71: " << findMax(3.14, 2.71) << endl;
    cout << "Max of 'Apple' and 'Banana': " << findMax(string("Apple"), string("Banana")) << endl;

    printPair("Roll No", 101);
    printPair("Score", 98.5);

    return 0;
}
