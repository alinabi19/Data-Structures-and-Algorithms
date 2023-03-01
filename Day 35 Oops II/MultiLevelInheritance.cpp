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

class lebra : public Dog{

};

int main(){
    Dog pehlaKutta;
    pehlaKutta.age;
    pehlaKutta.speak();

    lebra goldy;
    goldy.age;
    goldy.speak();   
    


return 0;
}