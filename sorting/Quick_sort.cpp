// Quick Sort Program
#include<iostream>
using namespace std;
void swap(int *p1, int *p2){   // p1, p2 acted here as apointer that can store address of variable
    int temp = *p1;            // here *p1 -> value at p1, that is nothing but the value of arr[j]
    *p1 = *p2;
    *p2 = temp;
}

int partition(int arr[], int start, int end){
         int pivot, first, last;
    if(start<end){
        pivot=start;
        first = start;
        last = end;
    }
    while(first<last){
        while(arr[first]<=arr[pivot]){
            first++;
        }
        while(arr[last]>arr[pivot]){
            last--;
        }
    
        if(first<last){
            swap(&arr[first], &arr[last]);
        }
        }
        swap(&arr[last], &arr[pivot]);
    return(last);
}

void quick_sort(int arr[], int start, int end){
    if(start<end){
        int pivot = partition(arr, start, end);
        quick_sort(arr, start, pivot-1);       
        quick_sort(arr, pivot+1, end);
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
    quick_sort(arr, start, end);
    print_array(arr, size);

    return 0;
}