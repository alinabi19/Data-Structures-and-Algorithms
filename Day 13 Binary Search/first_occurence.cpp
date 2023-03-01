// i/p -> {3,4,5,5,5,5,8,12}
// o/p -> 2


#include<iostream>
using namespace std;

int firstOccur(int arr[], int n, int target){
    int start =0;
    int end = n-1;
    // int mid = (start + end)/2;   integer overflow   [-2^31, 2^31-1] , plus krrhe hai start + end to ye overflow krdega
    // int mid = start/2 + end/2;  //TLE dega on leetcode
    int mid = start + (end-start)/2;
    int ans = -1;

    
    while(start<=end){
        int midElement = arr[mid];
        if(midElement==target){
        ans = mid;
        end = mid-1;
    }
    if(target<midElement){
        end = mid-1;
    }
    if(target>midElement){
        start = mid+1;
    }
    // mid = (start + end)/2;
    // mid = start/2 + end/2; // TLE dega on leetcode
    mid = start + (end-start)/2;

    }
    return ans;
}

int main(){

    int arr[] = {3,4,5,5,5,5,8,12};
    int n=9;
    int target=5;
    cout<<"First occurence at "<<firstOccur(arr, n, target);

return 0;
}

