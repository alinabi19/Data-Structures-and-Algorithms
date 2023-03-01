#include<iostream>
using namespace std;
class Demo{
    public:
    static int a;
};
//definition of static variable
int Demo::a=0;

int main(){

    Demo obj;
    // cout<<obj.a<<endl;

    cout<<Demo::a<<endl;


return 0;
}