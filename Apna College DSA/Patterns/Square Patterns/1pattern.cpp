#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){ //outer loop

      char ch ='A';
        for(int j=1;j<=n;j++){//inner loop

            cout<<ch<<" ";
            ch++;
        }

        cout<<endl;
    }
    return 0;
}