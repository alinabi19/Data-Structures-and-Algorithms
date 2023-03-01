// given -> 2D Array 
// target -> 13
// TC -> O(n^2)
#include<iostream>
using namespace std;
int func(int arr[][3], int m, int n, int target){  // size me atleast column ka size jrur dena hai
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][3]={5,1,3,4,6,8,10,13,11};
    int target = 13;
    int m,n;
    m=n=3;
    cout << func(arr, m, n, target);
    

return 0;
}