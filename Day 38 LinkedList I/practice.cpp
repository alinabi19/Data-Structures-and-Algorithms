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


// sabhi cheze right to left dalengi
void insertAtHead(Node* &head, int d){
    Node* n2 = new Node(d);
    n2->next = head;
    head=n2;
}

void insertAtTail(Node* &tail, int d){
    Node* n3 = new Node(d);
    tail->next=n3;
    tail=n3;
}

void insertAtPosition(Node* &head, int pos, int d){

    if(pos==1){
        insertAtHead(head, d);
    }

    Node* n4 = new Node(d);

    Node* temp=head;
    int trav = pos-2;
    while(trav--){
        temp = temp->next;
    }
    n4->next = temp->next;
    temp->next = n4;
}

void deleteNode(Node* &head, int target, int pos){
    if(head==NULL){
        return;
    }

    Node* temp = head;
    Node* prev = NULL;

    if(pos==1 && target == temp->data){
    head=head->next;
    temp->next=NULL;
    delete temp;
    }
    else{
        while(temp!=NULL && temp->data != target){
            prev=temp;
            temp = temp->next;
        }
        if(temp == NULL)
            {
                cout << "NOde node found" << endl;
                return;
            }
        prev -> next = temp->next;
        temp ->next = NULL;
        delete temp;
    }
}

int getlength(Node* &head){
    Node* temp = head;
    int count =0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    cout<<endl<<count<<endl;
}

void traverse(Node* &head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){

    Node* n1 = new Node(5);
    Node* head = n1;
    Node* tail = n1;

    insertAtHead(head, 8);
    insertAtHead(head, 19);
    insertAtHead(head, 38);
    insertAtHead(head, 778);

    insertAtTail(tail, 100);
    insertAtTail(tail, 200);
    insertAtTail(tail, 300);
    insertAtTail(tail, 400);

    insertAtPosition(head, 3, 99);

    traverse(head);
    deleteNode(head, 200, 7);
    getlength(head);
    traverse(head);

return 0;
}