#include<bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr+n);
        int mini = arr[0];
        int maxi = arr[n-1];
        int ans = maxi - mini;
        for(int i = 1; i<n; i++){
            if(arr[i] - k < 0) // if on subtracting k we got negative then continue 
            continue;
            mini = min(arr[0]+k, arr[i]-k);
            maxi = max(arr[n-1]-k, arr[i-1]+k);
            
            ans = min(maxi-mini, ans);
        }
        return ans;
}

int main(){
    int arr[] = {3, 9, 12, 16, 20}; 
    int k = 3;
    int n = sizeof(arr)/sizeof(int);
    int getMinDiff(arr, n, k);




return 0;
}