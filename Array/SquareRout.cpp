#include <iostream>
using namespace std;
int findRout(int num)
{
    int s = 0;
    int e = num;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
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
    int num = 1000000;
    cout << "square rout is  " << findRout(num) << endl;
}