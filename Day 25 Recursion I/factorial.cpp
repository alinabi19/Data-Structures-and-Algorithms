#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==1)
        return 1;
    int ans = n * factorial(n-1);
    return ans;
}
int main(){
    int n=5;
    cout<< "Factorial = "<<factorial(n);
    return 0;





}