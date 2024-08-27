#include <iostream>
using namespace std;
// function signature
int factorial(int n)
{ // functioinn body
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int num = factorial(n);
    int dem = factorial(r) * factorial(n - r);
    int ans = num / dem;
    return ans;
}
int main()
{
    int n, r;
    cin >> n >> r;
    // function call
    cout << "answe is " << nCr(n, r) << endl;
    return 0;
}
