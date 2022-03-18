#include<iostream>
using namespace std;
int linear_search(int arr[], int key, int size){
        for(int i=0; i<size; i++){
        if(key==arr[i]){
            return i+1;
        }
        else if(key<arr[i]){
            return -1;
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
    cout<<"Enter the elements you want to search: ";
    cin>>key;
    int pos = linear_search(arr, key, size);
    if(pos==-1){
    cout<<key<<" is not found";
    }
    else{
    cout<<key<<" is found at "<<"position : "<<pos;
    }
    return 0;
}