#include <iostream>
using namespace std;
void revese(int arr[], int size)
{
    int rev[size];
    for (int i = size - 1, j = 0; i >= 0, j < size; i--, j++)
    {
        rev[j] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << rev[i] << " ";
    }
}
//  void swapAlternate(int arr[], int size)
// {
//     int swapi[size];
//     for (int i = 0; i < size; i += 2)
//     {
//         if (i + 1 < size)
//         {
//             swapi = arr[i];
//         }
//     }
// }
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    revese(arr, 5);
}