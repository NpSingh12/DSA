#include <iostream>
using namespace std;
int isAp(int n)
{
    int ap = n;
    int ans = 3 * n + 7;
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << "answer is  " << isAp(n) << endl;
    return 0;
}