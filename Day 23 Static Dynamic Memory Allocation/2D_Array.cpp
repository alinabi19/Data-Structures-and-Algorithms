#include<iostream>
using namespace std;
int main(){

    int n,m;
    cout<<"Enter the value of m and n ";
    cin>>m>>n;
// creating a 2D array (m X n)
    int **arr=new int*[m];
    for(int i=0; i<m; i++){
        arr[i]=new int[n];
    }
    cout<<"Enter input "<<endl;
// input
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl<<"Printing the array"<<endl;

// print
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

// deleting heap memory
    for(int i=0; i<m; i++){
        delete []arr[i];
    }

// deleting stack memory
    delete []arr;

return 0;
}