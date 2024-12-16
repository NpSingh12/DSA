// leet code 1752;
#include <iostream>
#include<vector>
using namespace std;
bool check(int nums[],int n){
int count=0;
// int n= nums.size();
for (int i = 1; i < n; i++)
{
    // koie asa 1 element find karo jo agla element use se chota ha ' 
    if (nums[i-1]>nums[i])
    {
        count++;
        /* code */
    }
}
if (nums[n-1]>nums[0])
{
    count++;
    /* code */
}
return (count<=1);
}

int main(){
    int nums[5]={1,1,1,1,1};

    cout<<check(nums,5)<<endl;

}
