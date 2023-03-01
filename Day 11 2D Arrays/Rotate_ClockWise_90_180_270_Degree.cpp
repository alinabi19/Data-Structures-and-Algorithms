// Logic -> transpose of matrix
// reverse row <-> col

#include<bits/stdc++.h>
using namespace std;
int transpose(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<i; j++ ){  // dono baar swap  hojayga, isliye tabtak swap kro jabtak row<col ho
            swap(arr[i][j], arr[j][i]);
        }
    }
}
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int reverseMat(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
    int start=0;
    int end=col-1;
    while(start<end){
        swap(&arr[i][start], &arr[i][end]);
        start++;
        end--;
    }
    }
}

int printMat(int arr[][3], int row, int col){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
    }
        cout<<endl;
        }
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int row, col;
    row=col=3;
    transpose(arr, row, col);
    reverseMat(arr, row, col); // rotate 90degree
    transpose(arr, row, col);
    reverseMat(arr, row, col);  // rotate 180degree
    transpose(arr, row, col);
    reverseMat(arr, row, col);  // rotate 270 degree
    printMat(arr, row, col);
return 0;
}