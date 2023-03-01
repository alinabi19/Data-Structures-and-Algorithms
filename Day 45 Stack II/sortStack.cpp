#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &s, int data){
    // base case
    if(s.empty() || s.top()<data){
        s.push(data);
        return;
    }
    int topElement=s.top();
    s.pop();

    // Recursive call
    sortedInsert(s,data);

    s.push(topElement);

}

void sortStack(stack<int> &st){
    // base case
    if(st.empty()){
        return;
    }

    int topElement=st.top();
    st.pop();

    // Recursive call
    sortStack(st);

    // sortedInsert
    sortedInsert(st, topElement);
}



int main(){

    stack<int> st;

    st.push(3);
    st.push(5);
    st.push(2);
    st.push(1);
    st.push(4);

    sortStack(st);

    while(!st.empty()){     // ans reverse print hoga, qki stack reverse print krnta hai 
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

return 0;
}