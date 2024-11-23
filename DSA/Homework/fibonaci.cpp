#include <iostream>
using namespace std;
int isfibo(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 1; i <= n; i++)
    {
        int nextnum = a + b;
        cout << nextnum << " ";
        a = b;
        b = nextnum;
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    isfibo(n);
    return 0;
}