#include<iostream>
using namespace std;
int main(){
    // creation od 2D array
    // initialize with 0
    int arr[3][3]={0}; // isse saari values 0 hojayngi
    // initialize first element as 0 rest with 1
    int arr1[3][3]={1}; // phle values 1 hojaygi baki 0 
    // initialze 2D array like 1D array
    int arr2[3][3]={1,2,3,4,5,6,7,8,9};  // 1D array ki trh initialize krkste hai
    // initilizing 2D array row/col wise 
    int arr3[4][2]={{1,2}, {3,4}, {5,6}, {7,8}};
    int arr4[4][2]={{1,0}, {3,4}, {5,6}, {7,8}};

    int n=3;
    // inputing values
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // access element
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            cout<<arr4[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

return 0;
}