#include<iostream>
using namespace std;
int main(){
    char name[10];
    cout<<"ENTER THE NAME "<<endl;
    cin>>name;
    name[2]='\0';
    // cin>>name; 
    cout<<endl;
    cout<<name;
}