#include<iostream>
using namespace std;

class math{
    public:

// method overloading
        int add(int a, int b){
            return a+b;
        }     
// overloading number of parameters   
        int add(int a, int b, int c){
            return a+b+c;
        }
// overloading type of parameters   
        int add(int a, float b){
            return a+b;
        }
// overloading not happen by changing return type
        // float add(int a, int b){
        //     return a+b;
        // }
    
};

int main(){


return 0;
}