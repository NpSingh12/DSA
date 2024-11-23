// code studio problem Allocation book;
#include <iostream>
using namespace std;
bool isposibal(int *arr, int n, int m, int mid)
{
    int studentcount = 1;
    int pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (pages + arr[i] <= mid)
        {
            pages += arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount > m | arr[i] > mid)
            {
                return false;
            }
            pages += arr[i];
        }
    }
    return true;
}
int allocationbook(int *arr, int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (isposibal(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[4] = {30, 20, 10, 40};
    // int m= 2;
    cout << "the possible value is  " << allocationbook(arr, 4, 2) << endl;
}