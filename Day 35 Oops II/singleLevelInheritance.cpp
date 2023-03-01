#include<iostream>
using namespace std;

class Animal{
    public:
        int age;
    public:
        void speak(){
            cout<<"Animal is speaking "<<endl;
        }
};

class Dog : public Animal{

};

int main(){
    Dog d;
    d.age;
    d.speak();
    


return 0;
}