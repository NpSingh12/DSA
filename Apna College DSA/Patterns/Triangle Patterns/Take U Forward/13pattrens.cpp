#include<iostream>
using namespace std;
int main(){
    int n=5;
    int num=2*(n-1);
    for(int i=0;i<=n;i++){
        int start=i;
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=0;j<num;j++){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
        num -=2;
    }
}