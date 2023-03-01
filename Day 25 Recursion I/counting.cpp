#include<bits/stdc++.h>
using namespace std;

void counting(int n){
    if(n<1)
        return ;
    counting(n-1);
    cout<<n<<" ";   
}
int main(){
    int n=5;
    cout<< "counting = ";
    counting(n);
    return 0;





}