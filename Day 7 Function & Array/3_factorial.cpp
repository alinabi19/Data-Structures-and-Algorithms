// 12! tak factorial shi dega, qki integer ki range [ (-2^31) to (2^31) - 1 ] 
#include<iostream>
using namespace std;
int fact(int n){
    int ans  = 1;
    for(int i=n; i>0; i-- ){
        ans  = ans * i;
    }
    return ans;
}
int main(){
    int n = 5;
    cout<<fact(n);


return 0;
}