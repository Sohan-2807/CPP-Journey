#include<iostream>
#include<fstream>
using namespace std;

struct Item {
    int id;
    float price;
};

int main() {
    Item i1 = {1, 99.5}, i2;

    ofstream out("item.dat", ios::binary);
    out.write((char*)&i1, sizeof(i1)); // write struct
    out.close();

    ifstream in("item.dat", ios::binary);
    in.read((char*)&i2, sizeof(i2));   // read struct
    in.close();

    cout << "ID: " << i2.id << ", Price: " << i2.price << endl;
    return 0;
}
