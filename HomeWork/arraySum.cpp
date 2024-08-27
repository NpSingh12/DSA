#include <iostream>
using namespace std;
int getsum(int arr[], int size)
{
    int sum = 0;
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product = arr[i] * product;
        sum = arr[i] + sum;
    }
    int sub = product - sum;
    return sub;
}
int main()
{
    int arr[100];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "sum " << getsum(arr, size) << endl;

    return 0;
}