#include <iostream>
using namespace std;
int main()
{
    /*  int a;
      cout << "enter the value of a" << endl;
      cin >> a;
      int b;
      cout << "enter the value of b" << endl;
      cin >> b;
      if (a > b)
      {
          cout << "the a value is bigger";
      }
      else
      {
          cout << "value b is bigger";
      }
    int n;

    cout << "enter the value of n" << endl;
    cin >> n;
    if (n > 0)
    {

        cout << "positve " << endl;
    }
    else if (n < 0)
    {
        cout << "value is negative";
    }
    else
    {
        cout << "n is 0";
    }*/
    int n;
    cin >> n;
    int i = 1;
    int sum = 0;
    while (i <= n)
    {
        // to print the counting
        cout << i << "" << endl;
        // to find the sum of infintey no.
        sum = sum + i;

        i = i + 2;
    }
    cout << sum;
}