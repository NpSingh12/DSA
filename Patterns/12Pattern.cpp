#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int colm = 1;
        // char ch = row + 'A';
        while (colm <= n)
        {
            char ch = 'A' + row + colm - 2;
            cout << ch;
            // ch = ch + 1;
            colm = colm + 1;
        }
        cout << endl;
        row = row + 1;
    }
}