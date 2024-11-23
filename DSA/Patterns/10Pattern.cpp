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
        while (colm <= n)
        {
            char ch = 'A' + row - 1;
            cout << ch;
            colm = colm + 1;
        }
        cout << endl;
        row = row + 1;
    }
}