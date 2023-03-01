#include<iostream>
using namespace std;
int printArr(int arr[], int size){   
// function me array pass kiya hai , to size jrur pass krna hai
// or calculate krne ho to -> size = sizeof(arr)/sizeof(int)  -> ye kam nhi krega agr hmne element kam initialize kre hai size se
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={4,3,2,7,8};
    printArr(arr, 5);

return 0;
}