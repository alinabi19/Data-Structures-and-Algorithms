#include<iostream>
#include<stack>
using namespace std;

int main(){
    // creation of stack
    stack<int> st;

    // insertion
    st.push(5);
    st.push(7);
    st.push(8);

    // check size
    cout<<st.size()<<endl;

    // check empty or not
    cout<<st.empty()<<endl;

    // top element 
    cout<<st.top()<<endl;

    // remove 
    st.pop();

    // after removing the top element
    cout<<st.top()<<endl;





return 0;
}