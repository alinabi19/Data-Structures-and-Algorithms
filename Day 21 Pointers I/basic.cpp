#include<iostream>
using namespace std;

void dummy(int *arr /*arr[]*/, int n){
    cout<<sizeof(arr);  // qki arr ka adress ka size ayega jo ki int hai, base adress pass kiya tha na isliye
}
int main(){
    // int a=5;
    // int *p=&a;
    // cout<<p<<endl; // gives address of a
    // cout<<sizeof(p)<<endl;
    // cout<<*a<<endl;


    // int *p=0;
    // cout<<*p;

    int arr[]={1,2,3,4,5};

    cout<<arr<<endl;  //0x61fefc
    cout<<&arr<<endl;   // 0x61fefc -> why same q print kiya?  bcz arr is self referencing pointer(khud hi ko point krega)
    cout<<arr+2<<endl;
    cout<<&arr+2<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(&arr)<<endl;



//     // cout<<arr<<endl;
//     // cout<<arr+1<<endl;
//     // cout<<arr+2<<endl;
//     // cout<<arr+3<<endl<<endl;

//     // cout<<*arr<<endl;  // or arr[0]
//     // cout<<*(arr+1)<<endl;  // or arr[1]
//     // cout<<*(arr+2)<<endl;  // or arr[2]
//     // cout<<*(arr+3)<<endl<<endl;  // or arr[3]

//     // cout<<arr[0]<<endl;
//     // cout<<0[arr]<<endl;

//     // cout<<sizeof(arr)<<endl;
//     // dummy(arr,5);  // base adress pass kiya hai

// //     char ch='a';
// //     char *p=&ch;
// //     cout<<*p<<endl;  // a

// //     char chr[]="abcd";
// //     char *pt=chr;
// //     cout<<*pt<<endl; //a

// //     int arr[4]={1,2,3,4};
// //     int *ptr=arr;
// //     cout<<*arr<<endl;


// // // most important cout ki implementation is different for char and int
// //     char che='a';
// //     char *pe=&che;
// //     cout<<pe<<endl;  // a(garbage value)

// //     char chre[]="abcd";
// //     char *pte=chre;
// //     cout<<pte<<endl; //abcd


// // Q1  
// // int *p1;   // dangerous bcz read only memory ho kya pta use overWrite krde, security ki band bj jaye, isliye its dangerous
// // cout<<p1<<endl;
// // cout<<*p1<<endl;
// // cout<<&p1<<endl<<endl;

// // // Q2
// // int *p2=0;   
// // cout<<p2<<endl; // 0 adress ajayag
// // cout<<*p2<<endl; // segmentation fault -> mtlb ki jo exist nhi h vo memory access krne jarhe ho tm
// // cout<<&p2<<endl;   // segmentation fault

// // if(cout<<"Alina"){
// //     cout<<"if me"<<endl;
// // }
// // else{
// //     cout<<"else me"<<endl;
// // }


// char sentence[]="My name is alina";
// char *pr=  sentence;
// cout<<pr<<endl;
// cout<<*pr<<endl;
// cout<<&pr<<endl;




return 0;
}