#include <iostream>
using namespace std;
void getrevese(int arr[], int n)
{
    int back[n];
    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        back[j] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << back[i] << " ";
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    getrevese(arr, 5);
}