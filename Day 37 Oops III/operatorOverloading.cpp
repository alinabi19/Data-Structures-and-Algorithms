#include<iostream>
using namespace std;

class Demo{
    public:
        int first;
        int second;

// Binary Operator
        void operator+ (Demo &temp){
            cout<<"Or bhaiya kya haal hai"<<endl;
        }

        Demo operator- (Demo &temp){
            Demo result;          
            result.first = this->first + temp.first;
            result.second = this->second + temp.second;
            return result;
        }

// Unary Operator
        void operator++ (){
            cout<<"Unary operator is overloaded"<<endl;
        } 
};

// cout<<obj ke liye
        void operator<< (ostream& os, Demo& obj){
            cout << obj.first << " ";
            cout << obj.second << " " << endl;
        }

int main(){
     
    // Demo a;
    // Demo b;

    // a+b;

    // Demo c = a-b;

    // ++a;  // post increament will not work

    Demo obj;
    cout<<obj;


return 0;
}