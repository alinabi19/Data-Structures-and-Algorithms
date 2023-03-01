#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;


// 1 Half Pyramid
    for(int i=1; i<=n; i++){
        for(int j=i; j>0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
cout<<endl<<endl;
// 2 Inverted Half Pyramid
    for(int i=n; i>0; i--){
        for(int j=i; j>0; j--){
            cout<<"*";
        }
        cout<<endl;
    }

cout<<endl<<endl;
// 3 Hollow Inverted Half Pyramid
    for(int i=n; i>0; i--){
      if(i==n){
        for(int j=i; j>0; j--){
               cout<<"*";
        }
      }
        else{
        for(int j=i; j>0; j--){
            if(j==1 || j==i)
                cout<<"*";
            else
                cout<<" ";
        }
    }
        cout<<endl;
}

cout<<endl<<endl;
// 4 Full Pyramid
    for(int i=n; i>0; i--){
        for(int j=i-1; j>0; j--){
            cout<<" ";
        }
        for(int j=n-i+1; j>0; j--){
            cout<<"* ";
        }
        cout<<endl;
    }

cout<<endl<<endl;
// 4 Inverted Full Pyramid
    for(int i=n; i>0; i--){
        for(int j=n-i; j>0; j--){
            cout<<" ";
        }

        for(int j=i; j>0; j--){
            cout<<"* ";
        }
        cout<<endl;
    }

// 5 Hollow Full Pyramid
    for(int )


return 0;
}