// linear search ;
#include <iostream>
using namespace std;
// searching the element;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {

            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[7] = {9, 5, 6, 10, 3, 1, 0};
    // int size;
    // cout << " Enter the Array Size" << endl;
    // cin >> size;
    // int arr[100];
    // cout << " Enter the value" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    cout
        << "Enter the key " << endl;
    int key;
    cin >> key;
    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "Key is present " << endl;
    }
    else
    {
        cout << " key is not present " << endl;
    }
    return 0;
}