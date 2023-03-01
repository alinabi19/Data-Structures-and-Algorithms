
// valid parenthesis (M.imp)

#include<iostream>
#include<stack>
using namespace std;


bool match(char close, char open){
    if((open == '(' && close == ')') || (open == '{' && close == '}') || (open == '[' && close == ']')){
        return true;
    }
    return false;
}

bool validParenthesis(string s){
    // if the length of string is odd, then valid parenthesis didnt exist
    int len = s.length();
    if(len&1){
        return false;
    }

    stack<int> st;

    for(int i=0; i<s.length(); i++){
        char ch = s[i];
    if(ch=='(' || ch=='{' || ch=='['){
        st.push(ch);
        }
    else{
        if(!st.empty() && (ch, st.top())){
            st.pop();
        }
        else{
            return false;
        }
    }
    }
    if(st.empty())
        return true;
    else
        return false;
}

int main(){
    string s = "()}";
    // cout<<s[1]<<endl;
    cout<<validParenthesis(s);

return 0;
}