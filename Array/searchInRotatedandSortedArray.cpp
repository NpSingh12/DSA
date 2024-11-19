#include <iostream>
using namespace std;
int getPivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int binerysearch(int *arr, int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int findPosition(int arr[], int size, int key)
{
    int pivot = getPivot(arr, 5);
    if (key >= arr[pivot] && key <= arr[size - 1])
    {
        return binerysearch(arr, pivot, size - 1, key);
    }
    else
    {
        return binerysearch(arr, 0, pivot - 1, key);
    }
}
int main()
{
    int arr[5] = {7, 8, 1, 3, 9};
    // int key = 3;
    cout << "position is  " << findPosition(arr, 5, 9) << endl;
    return 0;
}