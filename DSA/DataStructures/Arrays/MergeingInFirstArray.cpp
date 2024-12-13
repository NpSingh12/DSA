#include<iostream>
#include<vector>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m){
    int i=n-1;
    int j=m-1;
    int k=n+m-1;
    while (i>=0 && j>=0)
    {
        if(arr1[i]>arr2[j]){
            arr1[k--]=arr1[i--];
        }else{
            arr1[k--]=arr2[j--];
        }
    }
    while (j>=0)
    {
        arr1[k--]=arr2[j--];
    
    }
    
    
}
void print (int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<< " ";
    }
    cout<<endl;
}
int main(){
    int arr1[8]={1,3,5,7,9, 0 ,0 ,0};
    int  arr2[3]={2,4,10};
    int n=5;
    int m=3;
    // int arr3[8]={0};
    merge(arr1, n, arr2 , m);
    print(arr1, n +m);
    return 0;
        
}