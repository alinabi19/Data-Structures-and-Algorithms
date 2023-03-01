#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

// constructor
        Node(int d){
            this->data = d;
            this->next = NULL; // bcz me nhi chahti, mera next kahi bhi point krde, khi location pr write krdiya to security ki band baj jayegi
        }
};

int main(){
// object craetion
    Node* first = new Node(6);  // Memory Dynamically allocated for object (we used new)
             //         |
 //          Node returns address of Node type, so we have make Node* pointer to store it
    cout<<first->data<<endl;
    cout<<first->next<<endl;

return 0;
}