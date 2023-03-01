#include<iostream>
using namespace std;

class Human{
    // properties - data members
    public:
        char gender;
        int age;

    // behaviour
    int getAge(){
        return age;
    }
    };

int main(){
    // object creation
    Human obj;
    obj.age = 23;

    // access
    cout<<obj.age<<endl;

return 0;
}