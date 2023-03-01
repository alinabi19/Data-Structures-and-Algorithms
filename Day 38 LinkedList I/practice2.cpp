#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(){
            data=0;
           next=NULL;          
        }

        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

void insertAtHead(Node* &head, int val){
    Node* n2=new Node(val);
    n2->next=head;
    head=n2;
}

void insertAtTail(Node* &tail, int val){
    Node* n3=new Node(val);
    tail->next=n3;
    tail=n3;
}

void display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* n1=new Node(5);
    Node* head=n1;
    Node* tail=n1;

    insertAtHead(head, 7);
    insertAtTail(head, 6);

    display(head);




return 0;
}