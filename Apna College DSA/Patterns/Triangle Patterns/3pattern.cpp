#include<iostream>
using namespace std;
char   charater (int n){
    for (int  i = 0; i < n; i++)
    {
        for(int j=0;j<i+1;j++){
           char ch ='A'+i+1-1;
            cout<<ch;
        }
        cout<<endl;
    }
    
}


int  numbers (int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1;
        }
        cout<<endl;

    }
}



int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<numbers(4);
    cout<<endl;
    cout<<charater(4);


    return 0;
}