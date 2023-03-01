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

void insertAtHead(Node* &head, int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail, int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;

}

void traverse(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

// 1
Node* reverseLinkedList(Node* &head){
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

// 2
Node* middle(Node* &head){
    Node* slow=head;
    Node* fast=head;

    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

//3
bool isCircular(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->next==head){
            return true;
        }
        temp=temp->next;
    }
    return false;

}

// 4
Node* reverseInK(Node* &head, int k){
    int count=0;
    Node* prev=NULL;
    Node* curr=head;
    Node* forward;

    while(curr!=NULL && count<k){
        forward = curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    cout<<endl<<"prev data"<<prev->data<<" "<<count<<endl;


    }
    cout<<endl;

    if(forward!=NULL){
    Node* rem = reverseInK(forward, k);
    head->next=rem;
    }
    cout<<endl<<"prev data"<<prev->data<<endl;
    return prev;
}

int main(){
    Node* n1=new Node(5);
    Node* head=n1;
    Node* tail=n1;
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);

    // insertAtTail(tail, 6);
    // insertAtTail(tail, 7);
    // insertAtTail(tail, 8);
    // insertAtTail(tail, 9);
    // insertAtTail(tail, 10);
    traverse(head);
    cout<<endl;


    // Node* head1 = reverseLinkedList(head);
    // traverse(head1);

    // Node* midNode=middle(head);
    // cout<<endl<<"Middle of LL is : "<<midNode->data<<endl;

    // cout<<"Is circular "<<isCircular(head)<<endl;

// Reverse in K Groups
    int k=3;
    Node* head2=reverseInK(head, k);
    traverse(head2);














return 0;
}