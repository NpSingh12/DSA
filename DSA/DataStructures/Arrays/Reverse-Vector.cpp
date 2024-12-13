#include<iostream>
#include<vector>
using namespace std;
vector<int> revese(vector<int> v){
    int  s=0 ;
    int e = v.size()-1;
    while (s<=e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
        /* code */
    }
    return v;
}
vector<int> print(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<< v[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(5);
    v.push_back(8);
    v.push_back(1);
// vector<int> ans= revese(v);
    print(revese(v));

    return 0;
}