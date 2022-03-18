#include<iostream>
using namespace std;
int linear_search(int arr[], int key, int size){
        for(int i=0; i<size; i++){
        if(key==arr[i]){
            return i+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={12, 56, 2, 78, 15, 98, 23, 56, 74, 42, 34, 68, 79, 10, 89, 100, 37}, key;
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