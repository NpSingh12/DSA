#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    while (i <= n)
    {
        if (n % i == 0)
        {
            cout << "not prime" << i << endl;
        }
        else
        {
            cout << "prime" << i << endl;
        }
        i = i + 1;
    }

} // namespace std;3
