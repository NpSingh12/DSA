#include <iostream>
using namespace std;

int getPivotIndex(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            // The smallest element is in the right part
            s = mid + 1;
        }
        else
        {
            // The smallest element could be mid or in the left part
            e = mid;
        }
        mid = s + (e - s) / 2;
    }

    // `s` (or `e`) now points to the index of the smallest element
    return s;
}

int main()
{
    int arr[5] = {3, 7, 9, 17, 1};
    int pivotIndex = getPivotIndex(arr, 5);
    cout << "Pivot index is " << pivotIndex << " and pivot element is " << arr[pivotIndex] << endl;
    return 0;
}
