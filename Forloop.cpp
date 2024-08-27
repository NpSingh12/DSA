#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Value " << endl;
    cin >> n;
    cout << "Value is Printing" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int col = 1; col <= n - i + 1; col++)
        {
            cout << col;
        }
        for (int start = i - 1; start = start; start--)
        {
            cout << '*';
        }
        // cout << i << endl;
        for (int start = i - 1; start = start; start--)
        {
            cout << '*';
        }
        for (int col2 = 1; col2 <= n - i + 1; col2++)
        {
            cout << n - i - col2 + 2;
        }
        cout << endl;
        // cout << i << endl;
    }
}