#include<iostream>
using namespace std;

class Matrix {
    int mat[2][2]; // 2D array inside class
public:
    void get() {
        cout << "Enter 4 elements:\n";
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> mat[i][j];
    }
    void show() {
        cout << "Matrix:\n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix m;
    m.get();
    m.show();
    return 0;
}
