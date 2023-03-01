#include<iostream>
using namespace std;

//11)
void square(int *p){
    int a=10;
    p=&a;  // p ab a(square func vala) ko point krrha hai, main vala a se ab koi lena dena nhi
    *p = (*p) * (*p);  // ab ye modification bhi a(square func vala) me horhi h
}

// 12)
int f(int x, int *y, int **z){
    int p,q;
    **z +=1;
    q=**z;
    *y+=2;
    p=*y;
    x+=3;
    return x+p+q;
}

// 14)
void increment(int **p){
    (**p)++;
}
int main(){

// // 1) 
    // float f=10.5;
    // float p=2.5;
    // float* ptr=&f;
    // (*ptr)++;
    // *ptr=p;
    // cout<<*ptr<<" "<<f<<" "<<p;  // 2.5 2.5 2.5

// // 2)
//     int a=7;
//     int b=17;
//     int *c=&b;
//     *c=7;
//     cout<<a<<" "<<b<<" "<<c<<" "<<&b<<endl;

// // 2)
//     int *ptr=0; // not pointing a valid address  (just a null pointer) bcz its pointing a null which is not exist in memory
//     int a=10;
//     *ptr=a;  // error bcz ptr valid memroy ko point nhi krrha to hum assign nhi krskte kuch isme 
//     cout<<*ptr<<endl; // error

// // 3)
// char ch='a';
// char *ptr= &ch;
// ch++;
// cout<<*ptr;  // b

// //4)
// int a=7;
// int *c=&a;
// c=c+1;
// cout<<a<<" "<<&a<<" "<<*c<<" "<<c<<endl; // 7 0x61ff08 6422284 0x61ff0c

// // 5)
// int a[5];
// int *c;
// cout<<sizeof(a)<<" "<<sizeof(c); // 20 4

// //6)
// int a[] = {1,2,3,4};
// cout<<*a<<" "<<*(a+1); // 1 2

// //7)   doubt
// int a[]={1,2,3,4};
// int *p = a++;
// cout<<*p<<endl;

// // 8)
// int arr[]={4,5,6,7};
// int *p=(arr+1);
// cout<<*(arr+9);

// 9)
// char b[] = "xyz"; 
// char *c = &b[0];
// cout<<c<<endl;

// // 10)
// char s[] = "hello";
// char *p = s;
// cout<<s[0]<<" "<<p[0]; // h h

// // 11)  
// int a=10; 
// cout<<&a<<endl; 
// square(&a);
// cout<<a<<endl;  // 10

// ################# Double Pointer Ques ############################
// // 12)
//     int c, *b, **a;
//     c=4;
//     b=&c;
//     a=&b;
//     cout<<f(c,b,a); // 19

// //13)
// int ***r, **q, *p, i=8;
// p=&i;
// (*p)++;
// q=&p;
// (**q)++;
// r=&q;
// cout<<*p<<" "<<**q<<" "<<***r; // 10 10 10

// 14)
int num=10;
int *ptr=&num;
increment(&ptr);
cout<<num<<endl; // 11












return 0;
}