#include <iostream>
#include <math.h>
using namespace std;
/*
int main()
{
  for (int i = 1; i <= 10; i++)
  {
    cout << i << endl;
  }
}
   int a = 5;
   int b = 6;
    float c = 10.9;
    int size = sizeof(a);
    char d = 'r';
   cout << 8 / 6 << endl;
    cout << size;
    int a = 'b';
    cout << a;
    char b = 100;
    cout << b;
    int c = -5;
    cout << c;
    int hi = 1;
  for (int i = 0; i <= 10; i++)
  {
      cout << i << endl;
  }

int a = 6;
int b = 5;
cout << "a&b" << (a & b) << endl;
cout << "a|b" << (a | b) << endl;
cout << "a~b" << ~a << endl;
cout << "a^b" << (a ^ b) << endl;
cout << (8 << 1) << endl;
cout << (10 << 1) << endl;
cout << (19 << 1) << endl;
cout << (21 << 2) << endl;
int x;
cin >> x;
int ans = 0;
// int i = 0;
while (x != 0)
{
  int digit = x % 10;
  ans = (ans * 10) + digit;
  x = x >> 1;
  x = x / 10;
  // i++;
}
cout << ans << endl;
int star;
cin >> star;
int row = 1;
while (row <= star)
{
  int space = row - 1;
  while (space)
  {
    cout << " ";
    space = space - 1;
  }
  int col = 1;
  while (col <= row)
  {
    cout << row;
    col = col + 1;
  }
  cout << endl;
  row = row + 1;
}*/
void reversedArray(int arr[], int size)
{
  // int rev;
  for (int i = size - 1; i >= 0; i--)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  cout << "revesed array: ";
  reversedArray(arr, 5);
  return 0;
}
