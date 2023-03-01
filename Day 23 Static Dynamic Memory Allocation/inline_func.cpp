#include<iostream>
using namespace std;

inline int func(int x, int y){
    return x*y;
}
int main(){
    int x=3, y=2;
    int ans = func(x,y);
    cout<<ans;

return 0;
}