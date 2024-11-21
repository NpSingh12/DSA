#include <iostream>
using namespace std;
long long int findRout(int num)
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
double morepresiger(int num, int pointvalue, int square)
{
    double facto = 1;
    double ans = square;
    for (int i = 0; i < pointvalue; i++)
    {
        facto = facto / 10;
        for (double j = ans; j * j < num; j = j + facto)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter num " << endl;
    cin >> num;
    int square = findRout(num);
    cout << "square rout is  " << morepresiger(num, 4, square) << endl;
    return 0;
}