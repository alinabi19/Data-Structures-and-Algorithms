#include<iostream>   // ye online chlao, vs me kaam nhi krrha
#include<math.h>
using namespace std;
int main(){
// // decimal ko binary me krrhe hai
//     int n = 5;
//     int ans = 0;
//     int  i = 0;
// // direct decimal num se binary digit nikal rhi hai, amazing
//     while(n!=0){
// // agr vo bit 0 hogi to 1 ke sath AND krne se ) hi ayga,
// // aur age 1 hogi to 1 ke sath AND krne par 1 hi ayga
//         int bit = n & 1; // rightmost bit nikaaldega ye,  prefer this, over %2 , because &1 is fast operation than %2
//         // int bit = n % 2; // rightmost bit nikaaldega ye bhi , but heavy operation , dont prefer this  
//         ans  = (bit * pow(10,i)) + ans;
// // last bit ko remove krdiya, right shift krke
//         n = n>>1;   // 0101 >> 1 = 0010  
//                     // 0010 >> 1 = 0001
//                     // 0001 >> 1 = 0000
//         i++;
//     }

//     cout<<"The binary representation of is : "<<ans<<endl;

// return 0;













    int n = 4;
    int ans = 0;
    int  i = 0;
    while(n!=0){
        int bit = n & 1; 
        ans  = (bit * pow(10,i)) + ans;
        n = n>>1;   
        i++;
    }

    cout<<"The binary representation of is : "<<ans<<endl;
return 0;























}