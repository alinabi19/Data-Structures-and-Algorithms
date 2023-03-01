#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseK(queue<int> &q, int k, int size){
    stack <int> s;
    int i=1;
    while(i<=k){
        s.push(q.front());
        q.pop();
        i++;
        // cout<<"first loop"<<endl;
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
        // cout<<"middle while"<<endl;

    }

    for(int i=1; i<=size-k; i++){
        q.push(q.front());
        q.pop();
        // cout<<"last while"<<endl;
    }


}

int main(){
    queue <int> q;
    q.push(3);
    q.push(5);
    q.push(9);
    q.push(7);
    q.push(6);
    q.push(2);

    int k=2;
    int n=6;

    reverseK(q, k, n);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

return 0;
}