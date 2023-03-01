#include<iostream>
using namespace std;

class Stack{
    public:
    int arr[5];
    int top;
    int size;

    Stack(int size){
        // arr=new int[size];
        top=-1;
        this->size=size;
    }
// inserting element
    void push(int d){
        if(top==size-1){
            // cout<<"stack overflow for element "<<d<<endl;
        }
        top++;
        arr[top]=d;
    }

// removing element
    void pop(){
        if(top==-1){
            // cout<<"stack underFlow "<<endl;
        }
        top--;
    }

// size
    int getSize(){
        return top+1;
    }

// isEmpty
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }

};

int main(){
        Stack* st = new Stack(5);

        st->push(6);
        st->push(46);
        st->push(7);
        st->push(12);
        st->push(15);
        st->push(162);
        st->push(122);
        st->push(152);
        cout<<st->getSize()<<endl;


        st->pop();

        cout<<st->getSize()<<endl;

        cout<<st->isEmpty()<<endl;







return 0;
}















































































// #include<iostream>
// #include<stack>
// using namespace std;

// class Stack {

//     public:
//     int *arr;
//     int top;
//     int size;

//     Stack(int s) {
//         arr = new int[s];
//         top = -1;
//         size = s;
//     }

//     void push(int d) {
//         //first check if array is full
//         if(top == size-1) {
//             cout << "Stack Overflow for element " << d << endl;
//             return;
//         }
//         top++;
//         arr[top] = d;
//     }

//     void pop() {
//         //check if array is empty or not
//         if(top == -1) {
//             cout << "Stack underflow " << endl;
//             return;
//         }
//         top--;
//     }

//     int getSize() {
//         //it returns the numner of element present in stack
//         return this->top+1;
//     }
    
//     int getTop() {
//         if(top != -1)
//             return arr[top];
//         else
//             return -1;
//     }

//     bool isEmpty() {
//         if(top == -1)
//             return 1;
//         else
//             return 0;
//     }

// };

// int main() {

//     //creation
//     Stack* st = new Stack(10);

//     st->push(1);
//     st->push(2);
//     st->push(3);
//     st->push(4);
//     st->push(5);
//     st->push(6);
//     st->push(7);
//     st->push(8);
//     st->push(9);
//     st->push(10);

//     st->pop();
//     st->pop();
//     st->pop();
//     st->pop();
//     st->pop();
//     st->pop();
//     st->pop();
//     st->pop();
//     st->pop();
//     st->pop();
//     //st->pop();
//     cout << st->getSize() << endl;

//     cout << st->isEmpty() << endl;

//     cout << st->getTop() << endl;



//     //cout << st->getSize() << endl;

//     // while(!st->isEmpty()) {
//     //     cout << st->getTop() << " ";
//     //     st->pop();
//     // }
//     // cout << endl;






//     return 0;
// }
