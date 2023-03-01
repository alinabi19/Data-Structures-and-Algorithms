#include<iostream>
using namespace std;

class Queue{
    public:
        int* arr;
        int front;
        int rear;
        int size;

    Queue(int n){
        arr=new int[n];
        front=0;
        rear=0;
        size=n;
    }

    void push(int val){
        if(rear==size){
            cout<<"overflow"<<endl;
            return;
        }
        else{
            arr[rear]=val;
            rear++;
        }
    }

    bool isEmpty(){
        if(rear==front){
            // cout<<"Queue is Empty"<<endl;
            return 1;
        }
        else{
            // cout<<"Queue is not Empty"<<endl;
            return 0;
        }
    }

    int getFront(){
        if(front==rear){
            return -1;
        }
        else
            return arr[front];
    }

    void pop(){
        if(front==rear){
            cout<<"underflow"<<endl;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }

    int getSize(){
        return (rear-front);
    }
};


int main(){

    Queue* q=new Queue(5);
    q->push(9);
    q->push(11);
    q->push(15);

    cout<<q->getSize()<<endl;

    cout<<q->isEmpty();

    cout<<q->getFront();

    q->pop();

    cout<<endl<<q->getFront()<<endl;


    while(!q->isEmpty()){
        cout<<q->getFront()<<" ";
        q->pop();
    }


return 0;
}