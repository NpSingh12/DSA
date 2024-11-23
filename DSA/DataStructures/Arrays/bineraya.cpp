#include <iostream>
using namespace std;
int firstouccurence(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        /* code */

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key)
        {
            // s = mid + 1;
            e = mid - 1;
            /* code */
        }
        else if (arr[mid] < key)
        {
            s = mid + 1; /* code */
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastoccurance(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
            /* code */
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int even[5] = {1, 2, 3, 3, 5};
    cout << "First ocurrance of 3 is at index  " << firstouccurence(even, 5, 3) << " " << lastoccurance(even, 5, 3) << endl;
    cout << "Last ocurrance of 3 is at index  " << lastoccurance(even, 5, 3) << endl;

    return 0;
}