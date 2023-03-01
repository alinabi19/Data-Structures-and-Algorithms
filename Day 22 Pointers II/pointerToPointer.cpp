#include<iostream>
using namespace std;

void func1(int** q) {
    q = q+1;
}

void func2(int** q) {
    *q = *q+1;   // p ke value(mtlb a ka adress) me +4 hojayga = 0x61ff08 + 4 = 0x61ff0c  (c ka hexa 12 hota hai)
}

void func3(int** q) {
    **q = **q+1;
}


int main(){
    int a = 5;
    int* p = &a;
    int** q = &p;
    int*** r = &q;

    // cout<< &a <<endl;  // a ka address -> 0x61ff08
    // cout<< a <<endl;   // 5
    // //cout<< *a <<endl;// error bcz a is variable not a pointer
    
    // cout<<endl<<endl;
    // cout<< &p <<endl;  // p ka address -> 0x61ff04
    // cout<< p <<endl;   // a ka address -> 0x61ff08
    // cout<< *p <<endl; // value at (a ka address) which stores by p

    // cout<<endl<<endl;
    // cout<< &q <<endl;  // q ka address ->  0x61ff00
    // cout<< q <<endl;   // p ka address -> 0x61ff04 
    // cout<< *q <<endl; //   0x61ff08   value at (p ka address) which stores by p (mtlb a ka adress print hoga) 
    // cout<< **q <<endl;   // 5 -> a ki value  
    
    // cout<<endl<<endl;
    // cout << "before " << q << endl; //0x61ff04
    // cout << "before " << *q << endl;//0x61ff08
    // cout << "before " << **q << endl;// 5

    // func1(q);

    // cout << "after " << q << endl; //0x61ff04
    // cout << "after " << *q << endl;//0x61ff08
    // cout << "after " << **q << endl;//5

    // cout<<endl<<endl;
    // cout << "before " << q << endl;//0x61ff04
    // cout << "before " << *q << endl;//0x61ff08
    // cout << "before " << **q << endl;//5
    
    // func2(q);

    // cout << "after " << q << endl;//0x61ff04
    // cout << "after " << *q << endl;//0x61ff0c
    // cout << "after " << **q << endl;//6422272 (ab p , a ko point nhi krrha isliye 0x61ff0c is adress pr jo value hogi vo print hogi )

    cout<<endl<<endl;
    cout << "before " << q << endl;
    cout << "before " << *q << endl;
    cout << "before " << **q << endl;

    func3(q);

    cout << "after " << q << endl;
    cout << "after " << *q << endl;
    cout << "after " << **q << endl;           
return 0;
}