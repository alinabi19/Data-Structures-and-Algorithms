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

int getLength(Node* &head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}

Node* reachingTail(Node* &head){
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    return temp;
}

Node* rotateList(Node* &head, int k){

    int n= getLength(head);

    if(head ==NULL || head->next==NULL || k==0 || k%n==0){
            return head;
        }

    k = k%n;

    // step 1
    // initializing prev=NULL, temp=head starting me hi
    Node* prev=NULL;
    Node* temp=head;

    int t=n-k;
    while(t--){
        prev=temp;
        temp=temp->next;
    }
    // step 2
    prev->next=NULL;

    // step 3
    Node* tail=reachingTail(temp);

    tail->next=head;

    return temp;

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

    // insertAtTail(tail, 23);
    // insertAtTail(tail, -43);
    // insertAtTail(tail, 43);
    // insertAtTail(tail, 1);
    // traverse(head);
    int k=3;
    head=rotateList(head, k);
    traverse(head);

    

return 0;
}