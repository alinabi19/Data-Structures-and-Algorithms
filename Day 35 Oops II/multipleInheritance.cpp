#include<iostream>
using namespace std;

class maruti{
    public:
        string name;
};

class suzuki{
    public:
        int value;
};

class swift : public maruti, public suzuki{  // har class ke sath mode btadena , nhi to private maanega by default

};

int main(){

    swift *miniCar = new swift();
    miniCar->name = "vxi";
    cout<<miniCar->name<<endl; 
    cout<<miniCar->value<<endl; 



return 0;
}