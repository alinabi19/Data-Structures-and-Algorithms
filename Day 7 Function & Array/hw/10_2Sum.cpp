// 2 sum
// ques -> given arr[], and k = num, so we have to find tha pair from array whose sum is k
// arr[] = {1,2,3,4,6,7,-2}
// k = 5
// output - > 1 4
         //   2 3 

#include<iostream>
using namespace std;
// brute force approach  (array may or may note be sorted)
// T.C = O(n^2)
// S.C = O(1)
// #################################################################################################################################
int twoSum(int arr[], int n, int k){
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
        if(arr[i]+arr[j]==k){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            break;
        }
        }
    }

}

// #################################################################################################################################
// two pointer approach  (array must be sorted)
// T.C = O(n)
// S.C = O(1)
// #################################################################################################################################
// int twoSum(int arr[], int n, int k){
//     int i = 0;
//     int j = n-1;
//     while(i<j){
//         if(arr[i]+arr[j]==k){
//             cout<<arr[i]<<" "<<arr[j]<<endl;
//             break;
//         }
//         else if(arr[i]+arr[j]<k){
//             i++;
//         }
//         else{  //(arr[i]+arr[j]>k)
//             j--;
//         }

//     }
// }

int main(){
    int arr[100]; 
    int n, k = 5;
    cout<<"enter the size of array : ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    twoSum(arr, n, k);

return 0;
}