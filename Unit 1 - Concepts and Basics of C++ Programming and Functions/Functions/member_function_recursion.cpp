#include<iostream>
using namespace std;

class Factorial {
public:
    int fact(int n) { // member function calling itself
        if (n <= 1) return 1; // base condition
        return n * fact(n - 1); // recursive step
    }
};

int main() {
    Factorial obj;
    cout << "Factorial of 5: " << obj.fact(5) << endl;
    return 0;
}
