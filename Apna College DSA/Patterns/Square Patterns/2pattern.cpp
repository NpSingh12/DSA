#include<iostream>
using namespace std;
int charater(int n){
    char ch ='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    
    
}
int main(){
    int n=3;
    int num=1;
    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<charater(n);
    
    return 0;

}