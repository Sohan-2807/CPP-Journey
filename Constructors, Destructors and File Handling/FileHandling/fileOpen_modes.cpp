#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename = "Test.txt";

    // 1. ios::out - Write mode (creates or overwrites file)
    fstream file1(filename, ios::out); 
    if(file1.is_open()) {
        file1 << "Hello, this is the first line.\n";
        file1.close();
        cout << "1. Wrote initial text using ios::out." << endl;
    }
    
    // 2. ios::app - Append mode (adds to end of file)
    fstream file2(filename, ios::out | ios::app);
    if(file2.is_open()) {
        file2 << "This line is appended to the end.\n";
        file2.close();
        cout << "2. Appended more text using ios::app." << endl;
    }
    
    // 3. ios::in - Read mode
    fstream file3(filename, ios::in);
    if(file3.is_open()) {
        cout << "3. Reading file contents using ios::in:" << endl;
        string line;
        while(getline(file3, line)) {
            cout << "   " << line << endl;
        }
        file3.close();
    }

    // 4. ios::ate - At end mode (opens and goes to the end of file)
    fstream file4(filename, ios::in | ios::ate);
    if(file4.is_open()) {
        cout << "4. Opened with ios::ate. Current position (file size): " 
             << file4.tellg() << " bytes." << endl;
        file4.close();
    }
    
    // 5. ios::trunc - Truncate mode (clears file contents if it exists)
    fstream file5(filename, ios::out | ios::trunc);
    if(file5.is_open()) {
        file5 << "File was truncated! This is the new content.\n";
        file5.close();
        cout << "5. Cleared and wrote new text using ios::trunc." << endl;
    }

    // 6. Read again to show truncation worked
    fstream file6(filename, ios::in);
    if(file6.is_open()) {
        cout << "6. Reading file again to show it was truncated:" << endl;
        string line;
        while(getline(file6, line)) {
            cout << "   " << line << endl;
        }
        file6.close();
    }

    return 0;
}
