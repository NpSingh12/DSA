#include<iostream>
using namespace std;
int selection(int *arr, int n){

    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex])
            minindex=j;
        }
        swap(arr[minindex],  arr[i]);

    }
    
}
int main(){
    int arr[]={8, 6, 2, 5, 1};
    int n= sizeof(arr)/sizeof(arr[0]);
    selection(arr,n);
    cout<<" sorted ans "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}