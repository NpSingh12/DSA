#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = row - 1;
        while (space)
        {
            cout << ' ';
            space = space - 1;
        }
        int start = n - row + 1;
        int value = row;
        while (start)
        {
            cout << value;
            start = start - 1;
            value = value + 1;
        }
        cout << endl;
        row = row + 1;
    }
}