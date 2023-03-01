#include<bits/stdc++.h>
using namespace std;

int colWiseSum(int arr[][4], int row, int col){
    int maxSum=INT_MIN;
    for(int i=0; i<col; i++){
    int sum=0;
        for(int j=0; j<row; j++){
            sum+=arr[j][i];
            }
            maxSum = max(sum, maxSum);
        }
        return maxSum;

}
int main(){
    int arr[3][4]={3,5,11,2,7,9,8,0,5,0,1,3};
    cout << colWiseSum(arr, 3, 4);


return 0;
};