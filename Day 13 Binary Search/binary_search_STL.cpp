#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {2,4,6,8,9,12,14,17,23};
    int n=9;
    int target=23;

    cout<<binary_search(arr, arr+n, target);



return 0;
}