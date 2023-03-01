#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(){
        this-> data = 0;
        this->next=NULL;
    }
    
    Node(int d){
        this->data = d;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head, int d){
    Node* n2 = new Node(d);
    n2->next = head;
    head=n2;

}

void insertAtTail(Node* &tail, int n){
    Node* tail1 = new Node(n);
    tail->next = tail1;
    tail = tail1;
}

void traverse(Node* &head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

// Iteratively
// Node* kthNodeFromEnd(Node* head, int k){
//     Node* slow = head;
//     Node* fast = head;

//     while(k--){
//         fast=fast->next;
//     }

//     while(fast!=NULL){
//         slow=slow->next;
//         fast=fast->next;
//     }
//     return slow;
// }

// Recursively 
int kthNodeFromEnd(Node* &head,int k){
    // base case 
    if(head == NULL){
        return 0;
    }

    int cnt = kthNodeFromEnd(head -> next, k) + 1;

    if(cnt == k){
        cout <<endl<< "Kth Node from end is : "<<head->data<<endl;
    }

    return cnt;
}


Node*  detectLoop(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}

bool detectAndDeleteLoop(Node* &head){
    // empty list
    if(head==NULL)
        return false;
    
    // step 1: detect if loop is present or not 
    Node* fast = detectLoop(head);

    // step 2: detect beginnning node
    Node* slow=head;
    while(fast!=slow){
        slow=slow->next;
        fast=fast->next;
    }

    // Step 3: remove the loop connection
    Node* beginningNode = slow;
    Node* temp = beginningNode;
    while(temp->next!=beginningNode){
        temp=temp->next;
    }
    temp->next=NULL;
    return true;
}

int main(){

//     Node* n1 = new Node(4);
//     Node* head = n1;

//     insertAtHead(head, 5);
//     insertAtHead(head, 78);
//     insertAtHead(head, 89);
//     insertAtHead(head, 12);
//     insertAtHead(head, 34);
//     traverse(head);

//     int k=2;

// // Iteratively call
//     // Node* head1 = kthNodeFromEnd(head, k);
//     // cout<<endl<<k<<"th Node from end is : "<<head1->data<<endl;

// // Recursive call
//     kthNodeFromEnd(head, k);

//     // int ind

//     // traverse(head1);


// to make loop in LL

    Node* n1 = new Node(4);
    Node* head = n1;
    Node* tail = n1;
    insertAtTail(tail, 5);
    insertAtTail(tail, 78);
    insertAtTail(tail, 89);
    Node* temp = tail;
    insertAtTail(tail, 12);
    insertAtTail(tail, 34);
    tail->next=temp;

    // traverse(head);
    cout<<detectAndDeleteLoop(head)<<endl;
    traverse(head);
    
    // cout<<detectLoop(tail);

return 0;
}