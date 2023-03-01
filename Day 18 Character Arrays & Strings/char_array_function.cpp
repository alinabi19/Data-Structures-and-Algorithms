#include<iostream>
#include<string.h>
using namespace std;

int getLength(char arr[]){
    int index = 0;
    while(arr[index] != '\0'){
        index++;
    }
    return index;

}
int main(){

    char name1[10]="Alina";
    cout<<getLength(name1)<<endl;
    cout << strlen(name1) << endl;

    char name2[10]="Alina";
    char name3[10]="aline";

    cout<<strcmp(name2,name3)<<endl; //  < 0
    cout<<strcmp(name3,name2)<<endl; //  > 0
    cout<<strcmp(name1,name2)<<endl; //  = 0

    char name4[10];
    strcpy(name4,name3);
    cout<<name4<<endl;



return 0;
}