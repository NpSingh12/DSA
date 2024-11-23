#include <iostream>
using namespace std;
int main()
{
    int n = 2;
    switch (n)
    {
    case 1:
        cout << "First";
        break;
    case 2:
        cout << "Second";
        // continue;
        break;
    default:
        cout << "not a no in this case";
        break;
    }
}