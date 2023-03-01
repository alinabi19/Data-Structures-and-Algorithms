#include<bits/stdc++.h>
using namespace std;

// not working 
bool anagram(string a, string b){
    map <char, int> m;
    // increament count of string a
    for(int i=0; i<a.length(); i++){
        char ch = a[i];
        m[ch]++;
    }
    // decreament count for string b
    for(int i=0; i<b.length(); i++){
        char ch = b[i];
        m[ch]--;
    } 

    // traversing the freq array
    for(auto it=m.begin(); it!=m.end(); it++){
        if(it->second != 0)
            return false;
    }
    return true;
}
int main(){
    string a="alina";
    string b="nail";

    cout<<anagram(a, b);

return 0;
}