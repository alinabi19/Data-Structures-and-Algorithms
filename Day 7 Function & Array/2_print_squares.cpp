// print even number
#include<iostream>
using namespace std;
int printEven(int n){
for(int i=1; i<=n; i++){
    cout<<i*i<<endl;
}
}

int main(){
    int num = 15;
    printEven(num);
return 0;
}