#include <iostream>
using namespace std;
int findRout(int num)
{
    int s = 0;
    int e = num;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        int square = mid * mid;
        if (square == num)
        {
            return mid;
        }
        if (square < num)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int num = 64;
    cout << "square rout is  " << findRout(num) << endl;
}