#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(){
        data = 0;
        next=NULL;
    }
    Node(int data){
        this->data = data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head, int d){
    Node* n2 = new Node(d);
    n2->next=head;
    head=n2;
}

void insertAtTail(Node* &tail, int d){
    Node* n2 = new Node(d);
    tail->next=n2;
    tail=n2;
}

void traverse(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


Node* RemoveZeroSumConsecutiveNodesFromLinkedList(Node* head){

}

int main(){
    Node* n1= new Node(4);
    Node* head=n1;
    Node* tail=n1;

    insertAtHead(head, 5);
    insertAtHead(head, 3);
    insertAtHead(head, -2);
    insertAtHead(head, -1);
    insertAtHead(head, 65);
    traverse(head);
    
    RemoveZeroSumConsecutiveNodesFromLinkedList(head);


    

return 0;
}