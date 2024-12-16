// codestudio
#include<iostream>
using namespace std;
int arryasofsum(int num1[], int n, int num2[], int m){
    int i=n-1;
    int j=m-1;
    int ans= 0;
    int carry=0;
    while(i>=0 && j>=0){
        int val1=num1[i];
        int val2=num2[j];
        int sum =val1+val2 + carry;
        carry = sum/10;
        sum= sum%10;
        ans= sum;
        i--;
        j--;

    }
// first case ke lie
while(i>=0){
    int sum =num1[i] +  carry;
        carry = sum/10;
        sum= sum%10;
        ans= sum;
        i--;
}
// second case 
while(j>=0){
    int sum = num2[j] + carry;
        carry = sum/10;
        sum= sum%10;
        ans= sum;
        j--;
}
// third case
while(carry !=0){
        int sum = carry;
        carry = sum/10;
        sum= sum%10;
        ans= sum;
       
}
return ans;
}
int main(){
    int num1[4]={4,2,3,5};
    int num2[4]={5,2,3,4};
    cout<<arryasofsum(num1, 4, num2 ,4);
    return 0;
}

