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
    public:
        void speak(){
                cout<<"Animal is barking "<<endl;
        }

};


int main(){
    
    Dog dog;
    dog.speak();
    


return 0;
}