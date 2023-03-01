// output -> 1 2 3 6 5 4 7 8 9

#include<bits/stdc++.h>
using namespace std;

int wave_form(int arr[][3], int row, int col){
    for(int i=0; i<col; i++){
    if(i%2==0){
        for(int j=0; j<row; j++){
        cout<<arr[i][j]<<" ";
        }
    }
    else{
    for(int j=row-1; j>=0; j--){
        cout<<arr[i][j]<<" ";
        }
    }
  }
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int row, col;
    row=col=3;
    wave_form(arr, row, col);
return 0;
}