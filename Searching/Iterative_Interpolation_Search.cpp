#include<iostream>
using namespace std;
int iterative_interpolation_search(int arr[], int l, int h, int key){
    while(l<=h){
    int mid = l + ((h - l) / (arr[h] - arr[l])) * (key - arr[l]);
    if(key == arr[mid]){
        return mid+1;
    }
    else if(key < arr[mid]){
        h=mid-1;
    }
    else{
        l = mid+1;
    }
    }
    return -1;

}
int main(){
    int arr[]={2, 5, 9, 11, 23, 54, 55, 65, 71, 76, 81, 88, 95, 99, 102, 123}, key;
    // or entering elements by user itself
    // cout<<"Enter the elements of an array: ";
    // for(int i=0; i<10; i++){
    //     cin>>arr[i];
    // }
    int size = sizeof(arr)/sizeof(arr[0]);
    int h = size-1;
    cout<<"Enter the elements you want to search: ";
    cin>>key;
    int pos = iterative_interpolation_search(arr, 0, h, key);
    if(pos==-1){
    cout<<key<<" is not found";
    }
    else{
    cout<<key<<" is found at "<<"position : "<<pos;
    }
    return 0;
}