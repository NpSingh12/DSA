// cod studio Bubble Sort problem
#include<iostream>
using namespace std;
int bubblesort(int *arr, int n){
    for (int i = 1; i < n; i++)
    // for round 1 to n-1
    {
        for(int j=0;j<n-i;j++){
            // process element till n-i index 
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    
}
int main(){
    int arr[]={10,1,7,6,14,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}