#include <iostream>
using namespace std;
// pass by value;
void dummy(int n)
{
    n++;
    cout << " n is " << n << endl;
}
int main()
{
    int n;
    cin >> n;
    dummy(n);
    cout << " numberis " << n << endl;
}