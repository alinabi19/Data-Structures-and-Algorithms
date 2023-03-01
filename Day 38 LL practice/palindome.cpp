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

// // Node* half(Node* &head){
// //     Node* slow=head;
// //     Node* fast=head;
// //     while(fast!=NULL){
// //         slow=slow->next;
// //         fast=fast->next->next;
// //     }
// //     return slow;
// // }

bool checkPalindrome(Node* &head1, Node* &head2){

    while(head1!=NULL && head2!=NULL){
        if(head1->data!=head2->data){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;
}



int main(){
    Node* n1=new Node(5);
    Node* head=n1;
    Node* tail=n1;
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);

    insertAtTail(tail, 4);
    insertAtTail(tail, 3);
    insertAtTail(tail, 2);
    insertAtTail(tail, 1);
    traverse(head);
    cout<<endl;

// breaking into two halves600

// edge case
    if(head==NULL && head->next==NULL){
        return true;
    }
    Node* temp0=head;
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    Node* temp1=slow->next;
    slow=NULL;
    Node* temp2=reverse(temp1);
    cout<<endl<<checkPalindrome(temp0, temp2);


return 0;
}