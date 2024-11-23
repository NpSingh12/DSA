#include <iostream>
using namespace std;
void reverse(int arr[], int size)
{
    int start = 0;
    // index swape case;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int brr[5] = {2, 6, 3, 8, 4};
    reverse(arr, 6);
    reverse(brr, 5);
    print(arr, 6);
    print(brr, 5);
    return 0;
}