#include<iostream>
using namespace std;

class Base{
    public:
        virtual void speak(){   // virtual lgate hi i am in derived class print horha hai
            cout<<"I am in base class"<<endl;
        }
};

class Derived : public Base{
    public:
        void speak(){
            cout<<"I am in derived class"<<endl;
        }
};

int main(){
    Base * bptr;
    Derived dobj;  
    bptr = &dobj;  // address derived class ka hai
    bptr->speak();


return 0;
}