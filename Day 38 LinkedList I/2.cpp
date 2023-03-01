#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
   
// constructor
        Node(int d){
            this->data = d;
            this->next = NULL; // bcz me nhi chahti, mera next kahi bhi point krde, khi location pr write krdiya to security ki band baj jayegi
        }
};
void insertAtHead(Node* &head, int d){
// step1: create new node
    Node* newNode = new Node(d);
// step2: set next ptr to head node
    newNode->next = head;
// strep3: head update
    head = newNode;
}

void insertAtTail(Node* &tail, int d){
// step1: create new node
    Node* newNode = new Node(d); 
// step2: set next ptr to head node
    tail->next = newNode;
// strep3: head update
    tail = newNode;

}

void insertAtPosition(Node* &head, int pos, int d) {
    //TODO: tail updation, while inserting node at the end
    //TODO: validate that position should 
    //be atmax 1 more than current Lenght of LL
    if(pos == 1) {
        insertAtHead(head,d);
    }
    else {
        //Step1: cration of New Node
        Node* newNode = new Node(d);

        //step2: 
        Node* prev = head;   //head copy krliya prev me
        int t = pos-2; // prev 1st node pr hai to, pos position pr lgane ke liye, pos-2 traverse krna pdega 
        while(t--)  
        {
            prev= prev->next;
        }

        //step3: connections update
        newNode->next = prev->next;
        prev->next = newNode;
    }
}


void deleteNode(Node* &head, int target, int pos) {

    //empty list
    if(head == NULL)
        return;

    Node* temp = head;
    Node* prev = NULL;
    if(target == temp->data && pos == 1){
        head  = head ->next;
        temp -> next = NULL;
        delete temp;
    }
    else{

        while(temp != NULL && temp->data != target) {
            prev = temp;
            temp = temp->next;
        }
        //here we are assuiming that we have found the element

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

int getLength(Node* &head) {
    Node* temp = head;
    int len = 0;
    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    } return len;
}

void traverse(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
// object creation
    Node* b = new Node(3);
    Node* head = b;
    Node* tail = b;

    // insertAtHead(head, 5);
    // insertAtHead(head, 7);
    // insertAtHead(head, 9);
    // insertAtHead(head, 11);
    
    // traverse(head);

    insertAtTail(tail, 5);
    insertAtTail(tail, 7);
    insertAtTail(tail, 9);
    insertAtTail(tail, 11);

    traverse(head);
    insertAtPosition(head, 6, 12);
    traverse(head);

    Node* head2 = NULL;
    deleteNode(head, 5, 1);
    traverse(head);
    cout << getLength(head) << endl;

return 0;
}