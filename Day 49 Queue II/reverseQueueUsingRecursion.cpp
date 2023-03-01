// reverse of Queue using recursion

#include<iostream>
#include<queue>
using namespace std;

void reverse(queue<int> &q){
// base case
    if(q.empty()){
        return;
    }
// 1st element store krliya, fir usko pop krdiya queue se
    int element = q.front();
    q.pop();
// baki recursion smbhalega
    reverse(q);
// last me us element ko push krdiya end me
    q.push(element);
}

void recur

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

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

return 0;
}