// Insertion Sort Program
#include<iostream>
using namespace std;

void insertion_sort(int arr[], int size){
    int i, j, key;
    for(i=0; i<size; i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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
    insertion_sort(arr, size);
    print_array(arr, size);

    return 0;
}