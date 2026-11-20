#include <iostream>
#include <cstring>
using namespace std;

// Demonstrates overloading '+' for string concatenation and '==' for comparison
class MyString {
    char str[100];

public:
    MyString(const char* s = "") {
        strcpy(str, s);
    }

    // Overloading '+' to concatenate two MyString objects: s3 = s1 + s2
    MyString operator+(const MyString &other) const {
        MyString result;
        strcpy(result.str, this->str);
        strcat(result.str, other.str);
        return result;
    }

    // Overloading '==' to compare two MyString objects
    bool operator==(const MyString &other) const {
        return strcmp(this->str, other.str) == 0;
    }

    void display() const {
        cout << str << endl;
    }
};

int main() {
    MyString s1("Hello, ");
    MyString s2("World!");

    // Using overloaded '+'
    MyString s3 = s1 + s2;

    cout << "s1: "; s1.display();
    cout << "s2: "; s2.display();
    cout << "s1 + s2: "; s3.display();

    cout << "---------------------------------" << endl;

    // Using overloaded '=='
    MyString name1("Antigravity");
    MyString name2("Antigravity");

    if (name1 == name2) {
        cout << "name1 and name2 are identical!" << endl;
    } else {
        cout << "name1 and name2 are different!" << endl;
    }

    return 0;
}
