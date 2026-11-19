#include<iostream>
using namespace std;

class Distance{
    int meters;
    public:
    // explicit keyword prevents implicit type conversion
    explicit Distance(int m){
        meters = m;
    }
    void show(){
        cout<<"Distance: "<<meters<<" meters\n";
    }
};

void displayDistance(Distance d){
    d.show();
}

int main(){
    Distance d1(100); // Direct initialization: OK
    d1.show();

    // Distance d2 = 50; // Compile Error: implicit conversion int -> Distance is prevented!

    displayDistance(Distance(200)); // OK: Explicitly converted
    // displayDistance(200);        // Compile Error: implicit conversion not allowed!

    return 0;
}
