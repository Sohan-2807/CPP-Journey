#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int v){
        data = v;
        next = NULL;
    }
};

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    Node*ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr = ptr->next;
    }
    cout<<"NULL."<<endl;

    // Freeing dynamically allocated nodes
    while(head != NULL){
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}