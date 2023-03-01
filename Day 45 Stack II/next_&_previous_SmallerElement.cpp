#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(int arr[], int n){
    stack<int> st;
    st.push(-1);
    vector<int> v(n,-1);
    for(int i=n-1; i>=0; i--){
        int item = arr[i];
        while(st.top()>=item){
            st.pop();
        }
            v[i]=st.top();
            st.push(item);
    }
    return v;
}

vector<int> prevSmallerElement(int arr[], int n){
    stack<int> st;
    st.push(-1);
    vector<int> v(n,-1);
    for(int i=0; i<n; i++){
        int item = arr[i];
        while(st.top()>=item){
            st.pop();
        }
            v[i]=st.top();
            st.push(item);
    }
    return v;
}

int main(){
    int arr[]={3,5,4,2};
    int n=4;
    vector<int> v;

    v=nextSmallerElement(arr, n);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v=prevSmallerElement(arr, n);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

return 0;
}