#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Write sample text to file
    ofstream fout("Test.txt");
    if (!fout) {
        cerr << "Error creating Test.txt" << endl;
        return 1;
    }
    fout << "Learning FileHandling\nRead function demonstration in C++\nLine 3 of sample file.";
    fout.close();

    // 1. Reading character-by-character using fin.get(ch)
    cout << "--- 1. Character-by-character (fin.get) ---" << endl;
    ifstream finChar("Test.txt");
    if (finChar) {
        char ch;
        while (finChar.get(ch)) {
            cout << ch;
        }
        cout << endl;
        finChar.close();
    } else {
        cerr << "Failed to open file for character reading." << endl;
    }

    // 2. Reading line-by-line using getline(fin, line)
    cout << "\n--- 2. Line-by-line (getline) ---" << endl;
    ifstream finLine("Test.txt");
    if (finLine) {
        string line;
        int lineNum = 1;
        while (getline(finLine, line)) {
            cout << "Line " << lineNum++ << ": " << line << endl;
        }
        finLine.close();
    } else {
        cerr << "Failed to open file for line reading." << endl;
    }

    // 3. Reading word-by-word using formatted extraction (fin >> word)
    cout << "\n--- 3. Word-by-word (fin >> word) ---" << endl;
    ifstream finWord("Test.txt");
    if (finWord) {
        string word;
        while (finWord >> word) {
            cout << "[" << word << "] ";
        }
        cout << endl;
        finWord.close();
    } else {
        cerr << "Failed to open file for word reading." << endl;
    }

    return 0;
}
