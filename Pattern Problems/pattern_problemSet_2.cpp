 //1  ############################################################################################################################################################################
// ****
// ****
// ****
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     // int i=1;
//     // while(i<=n){
//     //     int j=1;
//     //     while(j<=n){
//     //         cout<<"*";
//     //         j++;
//     //     }
//     //     cout<<endl;
//     //     i++;
//     // }

//      for(int i=1; i<=n; i++){
//          for(int j=1; j<=n; j++){
//              cout<<"*";
//          }
//          cout<<endl;
//      }
// return 0;
// }

// 2 ############################################################################################################################################################################
// 11111
// 22222
// 33333
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     // int i=1;
//     // while(i<=n){
//     //     int j=1;
//     //     while(j<=n){
//     //         cout<<i;
//     //         j++;
//     //     }
//     //     cout<<endl;
//     //     i++;
//     // }

//      for(int i=1; i<=n; i++){
//          for(int j=1; j<=n; j++){
//              cout<<i;
//          }
//          cout<<endl;
//      }
// return 0;
// }

// 3 ############################################################################################################################################################################
// 1234
// 1234
// 1234
// 1234
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }


// return 0;
// }

// 4 ############################################################################################################################################################################
// 4321
// 4321
// 4321
// 4321
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     // while(i<=n){
//     //     int j=1;
//     //     while(j<=n){
//     //         int x=(n-j+1);
//     //         cout<<x;
//     //         j++;
//     //     }
//     //     i++;
//     //     cout<<endl;
//     // }
//         while(i<=n){
//         int j=n;
//         while(j>0){
//             cout<<j;
//             j--;
//         }
//         i++;
//         cout<<endl;
//     }
// return 0;
// }

// 5 ############################################################################################################################################################################
// 1       2       3       4
// 5       6       7       8
// 9       10      11      12
// 13      14      15      16
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count<<" ";
//             j++;
//             count++;
//         }
//         cout<<endl;
//         i++;
//     }

// return 0;
// }

// 6 ############################################################################################################################################################################
// 16      15      14      13
// 12      11      10      9
// 8       7       6       5
// 4       3       2       1
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count=n*n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count<<"\t";
//             j++;
//             count--;
//         }
//         cout<<endl;
//         i++;
//     }
// return 0;
// }

// 7 ############################################################################################################################################################################
// *
// **
// ***
// ****
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// return 0;
// }

// 8 ############################################################################################################################################################################
// 1
// 22
// 333
// 4444
// 55555
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// return 0;
// }

// 9 ############################################################################################################################################################################
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<count<<" ";
//             j++;
//             count++;
//         }
//         cout<<endl;
//         i++;
//     }

// return 0;
// }

// 10 ############################################################################################################################################################################
// 1 
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     // int count;
//     // while(i<=n){
//     //     int j=1;
//     //     count=i;
//     //     while(j<=i){
//     //         cout<<count<<" ";
//     //         j++;
//     //         count++;
//     //     }
//     //     cout<<endl;
//     //     i++;
//     // }
//         while(i<=n){
//         int j=i;
//         while(j<i*2){
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

// return 0;
// }

// 11 ############################################################################################################################################################################
// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     // while(i<=n){
//     //     int j=1;
//     //     int count=i;
//     //     while(j<=i){
//     //         cout<<count<<" ";
//     //         j++;
//     //         count--;
//     //     }
//     //     cout<<endl;
//     //     i++;
//     // }
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<(i-j+1)<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// return 0;
// }

// 12 ############################################################################################################################################################################
// A A A 
// B B B
// C C C
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     int i=1;
//     char p =65;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<p<<" ";
//             j++;
//         }
//         cout<<endl;
//         p++;
//         i++;
//     }
// without using variable
//     //     while(i<=n){
//     //     int j=1;
//     //     while(j<=n){
//     //         cout<< (char)(65 +i-1)<<" ";
//     //         j++;
//     //     }
//     //     cout<<endl;
//     //     i++;
//     // }
// return 0;
// }

// 13 ############################################################################################################################################################################
// A B C 
// A B C
// A B C
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     int i=1;
//     // while(i<=n){
//     //     char p =65;
//     //     int j=1;
//     //     while(j<=n){
//     //         cout<<p;
//     //         j++;
//     //         p++;
//     //     }
//     //     cout<<endl;
//     //     i++;
//     // }
// without using variable
//         while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<< (char)(65 +j-1)<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

// return 0;
// }

// 14 ############################################################################################################################################################################
// A B C 
// D E F
// G H I
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     int i=1;
//     char p =65;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<p<<" ";
//             j++;
//             p++;
//         }
//         cout<<endl;
//         i++;
//     }

// return 0;
// }

// 15 ############################################################################################################################################################################
// A B C 
// B C D 
// C D E
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//     char p =65+i-1;
//         while(j<=n){
//             cout<<p<<" ";
//             j++;
//             p++;
//         }
//         cout<<endl;
//         i++;
//     }
// // or
//     //         while(j<=n){
//     //         cout<< (char)(65 + i + j - 2)<<" ";
//     //         j++;
//     //     }
//     //     cout<<endl;
//     //     i++;
//     // }

// return 0;
// }

// 16 ############################################################################################################################################################################
// A
// B B
// C C C
// D D D D
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;

//     // char p=65;
//     // for(int i=1; i<=n; i++){
//     //     for(int j=1; j<=i; j++){
//     //         cout<<p<<" ";
//     //     }
//     //     p++;
//     //     cout<<endl;
//     // }
// // or (without using variable)
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<(char)(65+i-1)<<" ";
//         }
//         cout<<endl;
//     }

// return 0;
// }

// 17 ############################################################################################################################################################################
// A
// B C
// D E F
// G H I J
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;

    // char p=65;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<p<<" ";
    //     p++;
    //     }
    //     cout<<endl;
    // }

// return 0;
// }

// 18 ############################################################################################################################################################################
// A
// B C
// C D E
// D E F G
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;

//     // char p=65;
//     // for(int i=1; i<=n; i++){
//     //     char q = p;
//     //     for(int j=1; j<=i; j++){
//     //         cout<<q<<" ";
//     //     q++;
//     //     }
//     //     cout<<endl;
//     //     p++;
//     // }
// // or (without using variable)
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<(char)(65+i+j-2)<<" ";
//         }
//         cout<<endl;
//     }

// return 0;
// }

// 19 ############################################################################################################################################################################
// D 
// C D 
// B C D 
// A B C D
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;

//     // char p=65;
//     // for(int i=1; i<=n; i++){
//     //     char q = p;
//     //     for(int j=1; j<=i; j++){
//     //         cout<<q<<" ";
//     //     q++;
//     //     }
//     //     cout<<endl;
//     //     p--;
//     // }
// // or (without using variable)
//     for(int i=1; i<=n; i++){
//         int p = 65+n-i;
//         for(int j=1; j<=i; j++){
//             cout<<(char)(p)<<" ";
//             p++;
          
//         }
//         cout<<endl;
//     }

// return 0;
// }

// 20 ############################################################################################################################################################################
// 1 1 1 1
//   2 2 2
//     3 3
//       4
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;
//     int sp = 1;
//     int st = n;
//     for(int i=1; i<n; i++){
//         for(int j=1; j<sp; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<st; j++){
//             cout<<i;
//         }
//         sp++;
//         st--;
//         cout<<endl;
//     }
// return 0;
// }

// 21 ############################################################################################################################################################################
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
// ############################################################################################################################################################################
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;
//     int sp = 3;
//     for(int i=1; i<=n; i++){
//         int st = 1;
//         for(int j=1; j<=sp; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=st; j++){
//             cout<<st;
           
//         }
//         sp--;
//         if(st)
//         st+=2;
//         cout<<endl;
//     }
// return 0;
// }
