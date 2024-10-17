#include <iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int size)
{
    int s = 0;
    int e = size - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }

    return s; // or return e; as s and e will be equal
}

int main()
{
    int hi[] = {1, 3, 5, 4, 2};            // Example mountain array
    int size = sizeof(hi) / sizeof(hi[0]); // Calculate the size of the array

    cout << "Peak element index: " << peakIndexInMountainArray(hi, size) << endl;

    return 0;
}
