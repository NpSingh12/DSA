#include <iostream>
using namespace std;
int insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {

        int miniElement = arr[i];

        int j = i - 1;

        for (; j >= 0; j--)
        {

            if (arr[j] > miniElement)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                // ruk jao jab i ke value j se larger ha;
                break;
            }
        }
        arr[j + 1] = miniElement;
    }
}
int whileInsertion(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[] = {10, 1, 7, 4, 8, 2, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    whileInsertion(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
