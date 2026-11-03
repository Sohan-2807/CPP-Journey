#include<iostream>
using namespace std;

class Box {
    int l, w, h;
public:
    // constructor with default arguments
    Box(int length = 1, int width = 1, int height = 1) {
        l = length; w = width; h = height;
    }
    // Box() { l = w = h = 1; } // error: ambiguous with Box(int=1,int=1,int=1)
    void show() { cout << l << " x " << w << " x " << h << endl; }
};

int main() {
    Box b1;           // uses all defaults: 1 x 1 x 1
    Box b2(5);        // 5 x 1 x 1
    Box b3(5, 10);    // 5 x 10 x 1
    Box b4(5, 10, 2); // 5 x 10 x 2

    b1.show(); b2.show(); b3.show(); b4.show();
    return 0;
}
