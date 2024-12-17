// leet code 125
#include<iostream>
using namespace std;
bool valid(char ch){
    if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0'&& ch<='9')){
        return 1;
    }
    return 0;
}


char toLowerCase(char a){
    if((a>='a'&& a<='z')||(a>='0'&& a<='9') )
    return a;
    else{
        char temp =a-'A'+'a';
        return temp;

         
    }

}

bool checkPalidrom(string a){
    int s=0;
    int e=a.length()-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            return 1;
        }
    }
}


bool isPalidrom(string s){
    // int i=0;
    string temp=" ";
    for (int j = 0; j < s.length(); j++)
    {
        if(valid(s[j])){
            temp.push_back(s[j]);
        }
    }
    // lowercase
    for (int j = 0; j <temp.length(); j++)
    {
        temp[j]=toLowerCase(temp[j]);
    }
     cout<<temp<<endl;
    return checkPalidrom(temp);
}
int main(){
    string s;
    cin>>s;
    cout<<isPalidrom(s);
    // cout<<checkPalidrom(s);

}
