//code chef probleam
#include<iostream>
#include <algorithm>
using namespace std;
bool isposibal(int arr[], int n, int k, int mid ){
    int cow=1;
    int lastposition =arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]-lastposition >= mid){
            cow++;
            lastposition=arr[i];
            if(cow==k){
                return true;
            }
        }
    }
        return false;
}
int arrassive(int arr[], int n, int k){
    sort(arr,arr+n);
   // sort{arr.begin(), arr.end()};
    int start =0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        maxi=max(maxi, arr[i]);
    }
    int end=maxi;
    int mid= start+(end-start)/2;
    int ans=-1;
    while(start<=end){

        if(isposibal(arr,n,  k ,mid)){
            ans=mid;
            start=mid+1;
        }else{
            end= mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;

}
int main(){
    int arr[]={4,2,1,3,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k= 2;
    cout<<" cow count is "<< arrassive(arr, n, k)<<endl;
    return 0;
}