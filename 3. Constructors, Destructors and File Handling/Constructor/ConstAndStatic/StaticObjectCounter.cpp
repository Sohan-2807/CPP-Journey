#include<iostream>
using namespace std;

class Item{
    int id;
    static int count; // Static member shared across all objects
    public:
    Item(int i){
        id = i;
        count++; // Increment count on each object creation
        cout<<"Item "<<id<<" created. Total active items: "<<count<<endl;
    }
    ~Item(){
        count--; // Decrement count on object destruction
        cout<<"Item "<<id<<" destroyed. Remaining items: "<<count<<endl;
    }
    static void showTotal(){
        cout<<"Current active object count: "<<count<<endl;
    }
};

// Initializing static data member outside class
int Item::count = 0;

int main(){
    Item::showTotal();

    Item a(1);
    Item b(2);

    {
        Item c(3);
        Item::showTotal();
    } // c goes out of scope

    Item::showTotal();

    return 0;
}
