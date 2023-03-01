// print even number
#include<iostream>
using namespace std;
int printEven(int n){
    // int i =1;
    // while(i<n){
    //  if(i%2==0){
    //      cout<<i<<endl;
    //  }
    //  i++;
    // }
// or
for(int i=2; i<=n; i= i+2){
    cout<<i<<endl;
}
}

int main(){
    int num = 15;
    printEven(num);
return 0;
}