// reverse of Queue using stack

#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverse(queue<int> &q){
    stack<int> s;
// step 1: queue -> stack
    while(!q.empty()){
    s.push(q.front());
    q.pop();
    }
// step 2: stack -> queueu
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}
int main(){
    queue <int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(9);

    cout<<"After reversing"<<endl;
    reverse(q);

// printing queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }


return 0;
}