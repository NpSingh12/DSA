// letcode problem 189;
#include <iostream>
#include <vector>
using namespace std;
// to roteate right side of the array;
void RightsideRoteate(int nums[],int n, int k){
   vector<int> temp(n);
    for(int i=0;i<n;i++){
        // % mode operater 
        temp[(i+k )%n]=nums[i];

    }
        // nums=temp;
        for(int i=0;i<n;i++){
            nums[i]=temp[i];
        }

}

// to roteate left side of the array
void leftsideroteate(int nums[],int n, int k){
    k=k%n;
    vector<int>temp(n);
    for(int i=0;i<n;i++){
        temp[i]= nums[(i+k)%n];
    }
    for (int  i = 0; i <=n; i++){
        nums[i]=temp[i];

    }
    
}
int prinnt (int ans[],int n){
    for (int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int nums[6]={1,3,6,11,12,17}; 
    leftsideroteate(nums, 6 ,4);
    prinnt(nums, 6);
    
    return 0;
}