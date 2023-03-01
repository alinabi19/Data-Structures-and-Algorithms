#include<bits/stdc++.h>
using namespace std;

int rowWiseSum(int arr[][4], int row, int col){
    int maxSum=INT_MIN;
    for(int i=0; i<row; i++){
    int sum=0;
        for(int j=0; j<col; j++){
            sum+=arr[i][j];
            }
            maxSum = max(sum, maxSum);
        }
        return maxSum;

}
int main(){
    int arr[3][4]={3,5,11,2,7,9,8,0,5,0,1,3};
    cout << rowWiseSum(arr, 3, 4);


return 0;
};