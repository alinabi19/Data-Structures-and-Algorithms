#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        data = 0;
        next = NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head, int data){
    Node* n2 = new Node(data);
    n2->next=head;
    head=n2;
}

void insertAtTail(Node* &tail, int data){
    Node* n3 = new Node(data);
    tail->next=n3;
    tail=n3;
}

void display(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* reverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* forward;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;

}

Node* middleElement(Node* &head){
    // Node* temp=head;
    Node* slow=head;
    Node* fast=head;

    while(fast->next!=NULL && fast->next->next!=NULL){  // traverse ho isliye AND use kiya 
        slow=slow->next;
        fast=(fast->next)->next;
    }
    cout<<endl<<slow->data<<endl;
    return slow;
}

bool isCircular(Node* &head){
    Node* temp=head;
    while(temp->next!=NULL){
        if(temp->next==head){
            return true;
        }
        temp=temp->next;
    }
    return false;
}



int main(){

    Node* n1 = new Node(6);
    Node* head=n1;
    Node* tail=n1;

    insertAtHead(head, 7);
    insertAtHead(head, 8);

    // display(head);

    insertAtTail(tail, 5);
    insertAtTail(tail, 4);
    insertAtTail(tail, 3);
    Node* temp1=tail;
    tail->next=head;
    // display(head);
    // cout<<endl;

    // Node* head1 = reverse(head);
    // display(head1);

    // Node* temp=middleElement(head);
    // cout<<"Middle Element = "<<temp->data<<endl;

    cout<<isCircular(head);



return 0;
}