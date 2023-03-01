#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int> & st, int totalSize){

    if( (totalSize/2) + 1 ==  st.size()) {
        cout << "Middle is " << st.top() << endl;
        return;
    }

    //step1
    int topElement = st.top();
    st.pop();

    //step2
    printMiddle(st, totalSize);


    //step3  (jo recursion pr pop kiya tha vapas se usko daalrhe hai stack me)
    st.push(topElement);
}
int main(){

// mine
    // stack<int> s;
    // int n=5;
    // s.push(2);
    // s.push(5);
    // s.push(8);
    // s.push(25);
    // s.push(89);

    // int temp = n;
    // while(temp){
    //     if(temp==n/2 + 1){
    //         break;
    //     }
    //     // cout<<"no"<<endl;
    //     s.pop();
    //     temp--;
    // }
    // cout<<s.top()<<endl;



// without deleting elements
    stack<int> st;

    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);

// for empty case
    if(st.size()==0){
        return 0;
    }

    printMiddle(st, st.size());



return 0;
}