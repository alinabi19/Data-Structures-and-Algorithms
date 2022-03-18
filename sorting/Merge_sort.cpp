// Quick Sort Program
#include<iostream>
using namespace std;
int merge(int arr[], int start, int mid, int end){
    int temp[end+1], l, l1, k;
    l = start;
    l1 = mid+1;
    k = start;
    while(l<=mid && l1<=end){   // sorting 2 subarrays
        if(arr[l]<arr[l1]){
            temp[k++]=arr[l++];
        }
        else
        temp[k++]=arr[l1++];
    }
    while(l<=mid){      // line 23, 26 while loop are for copying the data as it is in the temp[] from the firstly exhausted subarray
        temp[k++]=arr[l++]; 
    }
    while(l1<=end){
        temp[k++]=arr[l1++]; 
    }
        for(int i=start; i<=end; i++){
        arr[i]=temp[i];
    }
}

void merge_sort(int arr[], int start, int end){
    int mid;
    if(start<end){  // this is for to check whether we arrived at single element or not 
    mid = (start+end)/2;
    merge_sort(arr, start, mid);
    merge_sort(arr, mid+1, end);
    merge(arr, start, mid, end);
    }
}

int print_array(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={12, 56, 2, 78, 15, 98, 23, 56, 74, 42, 34, 68, 79, 10, 89, 100, 37};
    // or entering elements by user itself
    // cout<<"Enter the elements of an array: ";
    // for(int i=0; i<10; i++){
    //     cin>>arr[i];
    // }
    int size = sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=size-1;
    merge_sort(arr, start, end);
    print_array(arr, size);

    return 0;
}