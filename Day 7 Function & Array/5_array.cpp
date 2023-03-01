#include<iostream>
using namespace std;
int printArr(int arr[], int size){   // function me array pass kiya hai to size jrur dena hai
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void util(int arr[], int size){  // base address pass horha hai , mtlb real me change ayga
    arr[2] = 23;
    cout<<"Array in util function : ";
    printArr(arr, 5);

}
int main(){
    int arr[5]={4,3,2,7,8};
    util(arr, 5);
    cout<<endl<<"Array in main function : ";
    printArr(arr, 5);
   
return 0;
}