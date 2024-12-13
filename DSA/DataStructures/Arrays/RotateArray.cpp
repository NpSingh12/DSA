// letcode problem 189;
#include <iostream>
#include <vector>
using namespace std;
void rotatenum(int nums[],int n, int k){
   vector<int> temp(n);
    for(int i=0;i<n;i++){
        temp[(i+k )%n]=nums[i];

    }
        // nums=temp;
        for(int i=0;i<n;i++){
            nums[i]=temp[i];
        }

}
int prinnt (int ans[],int n){
    for (int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int nums[6]={1,2,3,4,5,6}; 
    rotatenum(nums, 6 ,3);
    prinnt(nums, 6);
    
    return 0;
}