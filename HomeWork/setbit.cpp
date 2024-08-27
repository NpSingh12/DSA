#include <iostream>
using namespace std;
void findsetbit(int num)
{
    int position = 1;
    while (num > 0)
    {
        if (num & 1)
        {
            std::cout << position << " ";
        }
        num = num >> 1;
        position++;
    }
}
int main()
{
    int num;
    cout << "enter number ";
    cin >> num;
    cout << "set bit ";
    findsetbit(num);
    cout << endl;
    return 0;
}