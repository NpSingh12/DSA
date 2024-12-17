// codestudio problem
// Check if The charing Is A Palindrome
#include<iostream>
using namespace std;
char toLowerCase(char a){
    if((a>='a'&& a<='z')||(a>='0'&& a<='9') )
    return a;
    else{
        char temp =a-'A'+'a';
        return temp;

         
    }

}


bool checkPalidrom(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(toLowerCase(a[s])!=toLowerCase( a[e])){
            return 0;
        }else{
            s++;
            e--;
        }

    }
    return 1;

}


int getLength(char a[]){
    int count =0;
    for(int i=0;a[i]!='\0';i++){
        count++;
    }
    return count;
}


int main(){
    char a[10];
    cout<<"enter the name ";
    cout<<endl;
    cin>>a;
    cout<<endl;
    int len= getLength(a);
    cout<<endl;
    cout<<"Palidrom is:  "<<checkPalidrom(a, len)<<endl;
}