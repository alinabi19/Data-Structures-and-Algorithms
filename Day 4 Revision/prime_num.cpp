#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    bool isPrime = true;   // flag hi hai ye isPrime
// 2 ke liye bhi kaam krega ye 
    for(int i = 2; i<n; i++){
        if(n % i==0){
            isPrime == false;
            break;
        }
    }
    if(isPrime){
        cout<<"Prime number";
    }
    else
        cout<<"Not a prime number";   
return 0;
}