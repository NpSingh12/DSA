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

        // int value = row;
        while (colm <= row)
        {
            cout << row + colm - 1;
            // value = value + 1;
            colm = colm + 1;
        }
        cout << endl;
        row = row + 1;
    }
}