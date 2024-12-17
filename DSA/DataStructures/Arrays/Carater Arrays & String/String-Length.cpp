#include<iostream>
using namespace std;
int getLength(char name[]){
    int count=0;
    for (int i = 0; name[i]!='\0'; i++){
        count++;
    }
    return count;
    
}
int main(){
    char name[10];
    
    cout<<"ENTER THE NAME "<<endl;
     cin>>name;
    // name[2]='\0';
    // cin>>name; 
    cout<<endl;
    cout<<name;
    cout<<endl;
    cout<< "Length of string is  "<< getLength(name) <<endl;
    return 0;


}