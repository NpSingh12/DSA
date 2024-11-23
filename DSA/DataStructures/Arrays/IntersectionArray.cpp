#include <iostream>
using namespace std;
// optimise approach in intersection of  two array qution;
int main()
{
    int arr1[8] = {1, 2, 2, 2, 3, 4};
    int arr2[4] = {2, 2, 2, 3};

    int i = 0;
    int j = 0;
    int n = arr1.size(), arr2.size();
    int ans = 0;

    while (i < n && j < n)
    {
        if (arr1[i] == arr2[j])
        {
            ans = arr1[i];
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << ans;
    return ans;
}