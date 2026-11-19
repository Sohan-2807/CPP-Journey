#include<iostream>
#include<string>
using namespace std;

class Player{
    string name;
    int score;
    int level;
    public:
    // Target constructor
    Player(string n, int s, int l){
        name = n;
        score = s;
        level = l;
        cout<<"Target constructor called for "<<name<<endl;
    }
    // Delegating constructor 1: delegates to target constructor
    Player(string n) : Player(n, 0, 1) {
        cout<<"Delegating constructor (name only) called\n";
    }
    // Delegating constructor 2: default delegates with default values
    Player() : Player("Guest", 0, 1) {
        cout<<"Default delegating constructor called\n";
    }
    void show(){
        cout<<"Player: "<<name<<", Score: "<<score<<", Level: "<<level<<endl;
    }
};

int main(){
    Player p1;
    p1.show();

    cout<<endl;
    Player p2("Sohan");
    p2.show();

    cout<<endl;
    Player p3("Alex", 150, 5);
    p3.show();

    return 0;
}
