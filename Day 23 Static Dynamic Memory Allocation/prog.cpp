#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int &j = i;  // reference variable (same memory , diff name)

    cout<<i<<endl; // 5
    i++;
    cout<<j<<endl; // 6
    j++;
    cout<<i<<endl; // 7

// Dynamic array
    int n;
    cout<<"Enter the values of n : ";
    cin>>n;

    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Printing the array ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

//  releasing array memory that was created in heap
    delete []arr;




return 0;
}