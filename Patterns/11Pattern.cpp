#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    char value = 'A';
    while (row <= n)
    {
        int colm = 1;
        while (colm <= n)
        {
            cout << value;
            colm = colm + 1;
            value = value + 1;
        }
        cout << endl;
        row = row + 1;
    }
}