#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the Value of A" << endl;
    cin >> a;
    cout << "Enter the Value of B" << endl;
    cin >> b;
    char op;
    cout << "enter the opration you want to calculate" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;

    default:
        cout << "Enter the validde opration" << endl;
        break;
    }
}