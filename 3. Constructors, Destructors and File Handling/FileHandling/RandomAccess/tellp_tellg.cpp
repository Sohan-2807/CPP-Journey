#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // 1. Demonstrating tellp() (Put pointer for output stream)
    ofstream fout("Test.txt");
    if (!fout) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    cout << "Initial tellp position: " << fout.tellp() << endl;
    fout << "Learning FileHandling\n";
    cout << "tellp position after first line: " << fout.tellp() << endl;
    fout << "Demonstrating tellp and tellg pointers";
    cout << "tellp position at end of write: " << fout.tellp() << endl;
    fout.close();

    // 2. Demonstrating tellg() (Get pointer for input stream)
    ifstream fin("Test.txt");
    if (!fin) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nInitial tellg position: " << fin.tellg() << endl;

    string word;
    fin >> word;
    cout << "First word read: \"" << word << "\"" << endl;
    cout << "tellg position after reading first word: " << fin.tellg() << endl;

    string remainingLine;
    getline(fin, remainingLine);
    cout << "Remainder of line read: \"" << remainingLine << "\"" << endl;
    cout << "tellg position after reading remainder of line: " << fin.tellg() << endl;

    fin.close();
    return 0;
}
