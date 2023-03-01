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

void traverse(Node* &head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

//ITERATIVELY
Node* reverseLinkedList(Node* &head){
    Node* curr = head;  // Node* se same memory me curr name dediya bas, Node curr se new memory allocate hojaygi isliye star lgaya 
    Node* prev = NULL;

    while(curr!=NULL){
        Node* forward = curr-> next;
        // to keep track of list ahead of curr node
       // change curr link and connect it to prev node
        curr->next = prev;

        // aage bado
        prev = curr;
        curr = forward;
    }
    return prev;
}

// RECURSIVELY
// Node* reverseLinkedList(Node* /*& (OPTIONAL)*/ curr, Node* prev){
//     // base case 
//     if(curr == NULL){
//         return prev;
//     }
//     // changing connection
//     Node* forward = curr->next;
//     curr->next=prev;
   
//     // baki case recursion smbhaal lega
//     return reverseLinkedList(forward, curr);
// }

Node* middleLinkedList(Node* head){

    if(head == NULL){
        cout<<endl<<"List is empty ";
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    
    while(fast!=NULL && fast->next!=NULL){  // dusri isliye qki agr last me ek hi node bachi to fast ka next null condition ke liye check kiya tab rukna hai
    slow=slow->next;
    fast=(fast->next)->next;
}
    return slow;
}

bool isCircular(Node* head){

    Node* temp = head;

    // to traverse the LL in normal case
    while(temp->next !=NULL){
        // incase the list is circular 
        if(temp->next==head){
            return true;
        }
        // move one node ahead
        temp=temp->next;
    }
    // it means we have traversed the entire list  return false
    return false;
}

Node* reverseInK(Node* head, int k){
    //empty list
    if(head == NULL)
    return NULL;

    Node* curr=head;
    Node* prev=NULL;
    // Node* forward=NULL; // or
    Node* forward=curr->next;
    int count=0;

    //Step 1: reverse first k nodes
    while(curr!=NULL && count<k){
        forward=curr->next;
        curr->next=prev;

        prev=curr;
        curr=forward;
        count++;
    }
    //next pointer will be pointing at the head of the remaining list
    if(forward!=NULL){ // is condition ki no need
    //step2:recursion will get ans for remaining list
        Node* rem = reverseInK(forward, k);
    //step3: connection list in step 1 and step 3
        head->next=rem;
    }
    //step 4: return head of entire list
    return prev;
}

// int linkedListLength(Node* &head){
//     Node* temp = head;
//     int count=0;
//     while(temp!=NULL){
//         count++;
//         temp=temp->next;
//     }
//     // cout<<count;
//     return count;
// }

bool palindromeLinkedList(Node* &head){

    if(head==NULL || head->next == NULL){
        return true;
    }

    // cout<<"\nhi";
    Node* slow = head;
    Node* fast = head;
    Node* temp = head;

    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }

    slow->next=reverseLinkedList(slow->next);
    slow=slow->next;

    while(temp!=NULL && slow!=NULL ){
        if(temp->data != slow->data){ 
            return false;
        }

        slow=slow->next;
        temp=temp->next;
    }
    // if(temp==NULL && slow==NULL)
        return true;
}

// Approach 1
// TC -> O(n)
// SC -> O(1)
// void sort0s1s2s(Node* &head){
//     int count0=0;
//     int count1=0;
//     int count2=0;
//     Node* temp = head;
//     while(temp!=NULL){
//         if(temp->data==0){
//             count0++;
//         }
//         else if(temp->data==1){
//             count1++;
//         }
//         else //(temp->next==2){
//             count2++;
//         temp=temp->next;
//     }
//     cout<<count0<<" "<<count1<<" "<<count2<<endl;
    
//     temp = head;

//     while(count0--){
//         temp->data=0;
//         temp=temp->next;
//     }
//     while(count1--){
//         temp->data=1;
//         temp=temp->next;
//     }
//     while(count2--){
//         temp->data=2;
//         temp=temp->next;
//     }
// }


// Approach 2
// TC -> O(n)
// SC -> O(1)
// void insertAtTail(Node* &tail, Node* curr){
//     tail->next=curr;
//     tail=curr;
// }

// void sort0s1s2s(Node* &head){

//     Node* zeroHead = new Node(-1);
//     Node* zeroTail = zeroHead;
//     Node* oneHead = new Node(-1);
//     Node* oneTail = oneHead;
//     Node* twoHead = new Node(-1);
//     Node* twoTail = twoHead;

//     Node* curr = head;

// // separate list of 0s, 1s, and 2s
//     while(curr!=NULL){       // O(n)

//         int value = curr->data;

//         if(value==0){
//             insertAtTail(zeroTail, curr);
//         }
//         if(value==1){
//             insertAtTail(oneTail, curr);
//         }
//         if(value==2){
//             insertAtTail(twoTail, curr);
//         }
//         curr=curr->next;
//     }

// // merge 3 sublist
//     if(oneHead->next!=NULL){    // O(1)
//         zeroTail->next=oneHead->next;
 
//     }
//     else{
//         zeroTail->next=twoHead->next;
//     }

//     oneTail->next=twoHead->next;
//     twoTail->next=NULL;

//     head=zeroHead->next;

// // deleting dummy nodes
//     delete zeroHead;               // O(1)
//     delete oneHead;
//     delete twoHead;
// }

void insertAtTail(Node* &tail, int d) {
        //step 1: cration of Node
        Node* newNode = new Node(d);
        //step2: 
        tail->next = newNode;
        //step3: head update;
        tail = newNode;
}

Node* mergeTwoSortedLL(Node* &h1, Node* &h2){
    if(h1==NULL){
        return h2;
    }
    if(h2==NULL){
        return h1;
    }

    Node* dummy = new Node(-1);
    Node* tempdummy = dummy;
    Node* temp1 = h1;
    Node* temp2 = h2;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data <= temp2->data){
            tempdummy->next=temp1;
            tempdummy=temp1;
            temp1=temp1->next; 
        }        
        else if(temp1->data >= temp2->data){
            tempdummy->next=temp2;
            tempdummy=temp2;
            temp2=temp2->next;
        }
    }

    while(temp1!=NULL){
        tempdummy->next=temp1;
        tempdummy=temp1;
        temp1=temp1->next;
    }    
    while(temp2!=NULL){
        tempdummy->next=temp2;
        tempdummy=temp2;
        temp2=temp2->next;
    }
    Node* head = dummy->next;
    dummy->next=NULL;
    delete dummy;
    return head;
}



int main(){

    // Node* n1 = new Node(6);
    // // Node* n1 = NULL;
    // Node* head = n1;
    // Node* tail = n1;

    // insertAtHead(head, 8);
    // insertAtHead(head, 9);
    // insertAtHead(head, 9);
    // insertAtHead(head, 8);
    // insertAtHead(head, 6);
    // insertAtHead(head, 5);
    // insertAtHead(head, 8);
    // insertAtHead(head, 5);

    // insertAtHead(head, 75);
    // insertAtHead(head, 108);

    // traverse(head);

    // // head = reverseLinkedList(head, NULL);
    // // cout<<endl;
    // // traverse(head);
    
    // int middle = middleLinkedList(head)->data;

    // cout<<endl<<"Middle is : "<<middle;

    // // to make circular
    // head->next = head;

    // cout<<endl<<isCircular(head);

    // traverse(head);
    // cout<<endl;
    // head=reverseInK(head, 3);
    // traverse(head);

    // cout<<"\n"<<palindromeLinkedList(head);
//  ##############################################################

    // Node* n1 = new Node(0);
    // Node* head = n1;

    // insertAtHead(head, 2);
    // insertAtHead(head, 1);
    // insertAtHead(head, 2);
    // insertAtHead(head, 0);
    // insertAtHead(head, 1);

    // sort0s1s2s(head);
    // traverse(head);

    Node* head1 = new Node(1);
    Node* tail1 = head1;
    insertAtTail(tail1, 4);
    insertAtTail(tail1, 6);
    traverse(head1);
    cout<<endl;

    Node* head2 = new Node(2);
    Node* tail2 = head2;
    insertAtTail(tail2, 5);
    insertAtTail(tail2, 9);
    insertAtTail(tail2, 10);
    traverse(head2);
    cout<<endl;

    Node* head = mergeTwoSortedLL(head1, head2);

    traverse(head);

return 0;
}