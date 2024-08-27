#include <iostream>
using namespace std;
int main()
{
    int amount;
    cin >> amount;
    int num = 1;
    int notes = 0;
    switch (num)
    {
    case 1:
    {
        notes = amount / 100;
        amount = amount - (100 * notes);
        cout << "RS 100 notes required";
        // break;
    }
    case 2:
    {
        notes = amount / 50;
        amount = amount - (50 * notes);
        cout << "Rs 50 notes Required";
        // break;
    }
    case 3:
    {
        notes = amount / 20;
        amount = amount - (20 * notes);
        cout << "Rs 20 notes Required";
        // break;
    }
    case 4:
    {
        notes = amount / 1;
        amount = amount - (1 * notes);
        cout << "'Rs 1 is required'";
    }
    default:
        break;
    }
}