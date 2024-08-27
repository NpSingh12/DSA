#include <iostream>
using namespace std;
void printarray(int arr[10], int size)
{
    cout << "prinnting array" << endl;
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // Intialized array;
    int a[3] = {1, 2, 3};
    // cout << a[1] << endl;

    int b[15] = {1};
    int n = 15;
    //  printarray(b, 15);
    int bsize = sizeof(b) / sizeof(int);
    // cout << bsize;
    // cout<<
    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    // cout << ch[2];
    for (int i = 0; i <= 4; i++)
    {
        cout << ch[i] << " ";
    }
}