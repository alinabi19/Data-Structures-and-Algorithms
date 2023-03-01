#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n = 5;
    int ans = 0;
    int  i = 0;
    while(n!=0){
        int bit = n % 2; 
        ans  = (bit * pow(10,i)) + ans;
        n = n>>1;   
        i++;
    }

    cout<<"The binary representation of is : "<<ans<<endl;
return 0;
}