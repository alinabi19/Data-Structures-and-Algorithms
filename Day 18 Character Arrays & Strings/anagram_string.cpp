#include<iostream>
using namespace std;

bool anagram(string a, string b){
    int freq[26]={0};
    // increament count of string a
    for(int i=0; i<a.length(); i++){
        char ch = a[i];
        int index = ch - 'a';
        freq[index]++;
    }
    // decreament count for string b
    for(int i=0; i<b.length(); i++){
        char ch = b[i];
        int index = ch - 'a';
        freq[index]--;
    } 

    // traversing the freq array
    for(int i=0; i<26; i++){
        if(freq[i] != 0)
            return false;
    }
    return true;
}
int main(){
    string a="alina";
    string b="inala";

    cout<<anagram(a, b);

return 0;
}