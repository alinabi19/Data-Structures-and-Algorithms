#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(){
            this->data=0;
            this->next=NULL;
        }

        Node(int data){
            this->data=data;
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
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }    
}

Node* detectLoop(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast = fast->next->next;
    if(slow==fast){
        return slow;
    }
    }
    return NULL;
}

bool detectAndDeleteLoop(Node* &head){
    if(head==NULL){
        return false;
    }

    Node* fast=detectLoop(head);

    Node* slow = head;
    while(slow!=fast){
        slow=slow->next;
        fast = fast->next;
    }
    Node* temp = slow;
    Node* beginning = temp;
    while(temp->next!=beginning){
        temp=temp->next;
    }
    temp->next=NULL;
    return true;
}



int main(){

    Node *n1=new Node(4);
    Node* head = n1;
    Node* tail = n1;
    // insertAtHead(head, 23);
    // insertAtHead(head, 29);
    // insertAtHead(head, 67);
    // insertAtHead(head, 55);

    insertAtTail(tail, 35);
    insertAtTail(tail, 66);
    Node* temp = tail;
    insertAtTail(tail, 22);
    insertAtTail(tail, 45);
    insertAtTail(tail, 88);
    tail->next = temp;


    // cout<<endl<<detectLoop(head);
    // traverse(head);
    cout<<detectAndDeleteLoop(head)<<endl;
    traverse(head);


return 0;
}