#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    // int count = 1;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col;
        }
        for (int star = 0; star < row; star++)
        {
            cout << "*";
        }
        for (int col2 = n - row + 1; col2 >= 1; col2--)
        {
            cout << col2;
        }
        cout << endl;
    }
}