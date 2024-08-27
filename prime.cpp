#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Value " << endl;
    cin >> n;
    cout << "Value is Printing" << endl;
    bool isprime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
        if (isprime == 0)
        {
            cout << "it no a prime no";
        }
        else
        {
            cout << "prime no";
        }
        cout << endl;
    }
}