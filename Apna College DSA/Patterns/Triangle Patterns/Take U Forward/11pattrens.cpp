#include<iostream>
using namespace std;
int main (){
    int n=5;
    // for(int i=1;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=n;i>0;i--){
    //     for(int j=i-1;j>0;j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<=2*n-1;i++){
        int star=i;
        if(i>n) star=2*n-i;
        for(int j=0;j<=star-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}