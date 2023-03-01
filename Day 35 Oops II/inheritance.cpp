#include<iostream>
using namespace std;

class human{
    protected:
        int age;
        char gender;

    public:
        int getAge(){
            return this->age;
        }
};

class female : protected human{
    void util(){
    cout<< this->age;

    }
};

int main(){
    human obj;
    female obj1;
    cout<<obj1.age;  // inaccesible in all public, private, protected


return 0;
}