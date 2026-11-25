#include <iostream>
#include <exception>
#include <string>
using namespace std;

class NegativeValueException : public exception {
    string message;
public:
    NegativeValueException(const string& msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};

double checkNonNegative(double value) {
    if (value < 0) {
        throw NegativeValueException("Error: Value cannot be negative!");
    }
    return value;
}

int main() {
    try {
        cout << "Testing value 50: " << checkNonNegative(50) << endl;
        cout << "Testing value -10: " << checkNonNegative(-10) << endl;
    } catch (const NegativeValueException& e) {
        cerr << "Caught custom exception: " << e.what() << endl;
    } catch (const exception& e) {
        cerr << "Standard exception: " << e.what() << endl;
    }

    return 0;
}
