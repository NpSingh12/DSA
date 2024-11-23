#include <iostream>
using namespace std;
int isdublicate(int arr[], int size)
{
    int dub = 0;
    for (int i = 0; i < size; i++)
    {
        dub = dub ^ arr[i];
    }
    // xor [1 n-1]
    for (int i = 1; i < size; i++)
    {
        dub += i;
    }
    return dub;
}
int main()
{
    int size;
    cin >> size;
    int arr[6] = {1, 2, 3, 4, 5, 1};
    isdublicate(arr, 6);
    cout << "Dublica te is " << isdublicate(arr, 6);

    return 0;
}