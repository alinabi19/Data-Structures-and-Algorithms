// craete stack, take n, input n values using stack
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int t;
    cout<<"Enter "<<n<<" values : ";
    while(n--){
    cin>>t;
    s.push(t);
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;



return 0;
}