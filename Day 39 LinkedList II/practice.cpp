#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int n){
    Node* head1 = new Node(n);
    head1->next = head;
    head = head1;

}

void insertAtTail(Node* &tail, int n){
    Node* tail1 = new Node(n);
    tail->next = tail1;
    tail = tail1;
}

void traverse(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// 1) reverse LL
// TC -> O(N)
// SC -> O(1)
Node* reverse(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    Node* forward;

    while(curr!=NULL){
        forward=curr->next;
// link nodes backwardly
        curr->next=prev;
// moving prev and curr by one step forward
        prev=curr;
        curr=forward;
    }
    return prev;
}

// 2) Middle of LL
// TC -> O(N)
// SC -> O(1)
Node* middle(Node* &head){
    Node* slow = head;
    Node* fast = head;

    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

// 3) Is circular LL
// TC -> O(N)
// SC -> O(1)
bool isCircular(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->next==head){
            return true;
        }
        temp=temp->next;
    }
    return false;
}


int main(){

    Node* n1 = new Node(2);
    Node* head = n1;
    Node* tail = n1;

    insertAtHead(head, 3);
    insertAtHead(head, 6);
    insertAtHead(head, 8);
    insertAtHead(head, 16);    
    
    insertAtTail(tail, 53);
    insertAtTail(tail, 76);
    insertAtTail(tail, 98);
    // insertAtTail(tail, 106);

    traverse(head);

    // Node* head1 = reverse(head);
    // traverse(head1);

    Node* head2 = middle(head);
    cout<<head2->data<<endl;

// to make circular
    head->next=head;
    cout<<"Is LL circular : "<<isCircular(head);
    



    




}

