// Selection Sort Program
#include<iostream>
using namespace std;
void swap(int *p1, int *p2){   // p1, p2 acted here as apointer that can store address of variable
    int temp = *p1;            // here *p1 -> value at p1, that is nothing but the value of arr[j]
    *p1 = *p2;
    *p2 = temp;
}

void selection_sort(int arr[], int size){
    int i, j, key;
    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
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
    selection_sort(arr, size);
    print_array(arr, size);

    return 0;
}