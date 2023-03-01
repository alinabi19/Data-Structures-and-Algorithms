#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int elem){

    // base case
    if(st.empty()){
        st.push(elem);
        return;
    }

    // step 1
    int topElement = st.top();
    st.pop();
        
    // step 2 : recursive call
    insertAtBottom(st, elem);

    // step 3
    st.push(topElement);
}

void reverse(stack<int> &st){
    // base case
    if(st.empty()){
        return;
    }

    // step1
    int topElement=st.top();
    st.pop();

    // step2
    reverse(st);

    // step 3
    insertAtBottom(st, topElement);
}

int main(){
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);               

    insertAtBottom(st, 15);
    reverse(st);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

return 0;
}