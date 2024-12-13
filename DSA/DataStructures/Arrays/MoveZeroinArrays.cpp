// codestudio problem 
#include<iostream>
using namespace std;
int movezero(int arr[], int n){
    int zero= 0;
    for(int j=0;j<n;j++){
        if(arr[j] !=0){
            swap(arr[j], arr[zero]);
            zero++;
        }
    }
}
void print (int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6]={0,1,0,3,12,0};
    movezero(arr, 6);
    print(arr,6);
    return 0;

}