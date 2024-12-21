#include <iostream>
#include <math.h>
using namespace std;
// // // /*
// // // int main()
// // // {
// // //   for (int i = 1; i <= 10; i++)
// // //   {
// // //     cout << i << endl;
// // //   }
// // // }
// // //    int a = 5;
// // //    int b = 6;
// // //     float c = 10.9;
// // //     int size = sizeof(a);
// // //     char d = 'r';
// // //    cout << 8 / 6 << endl;
// // //     cout << size;
// // //     int a = 'b';
// // //     cout << a;
// // //     char b = 100;
// // //     cout << b;
// // //     int c = -5;
// // //     cout << c;
// // //     int hi = 1;
// // //   for (int i = 0; i <= 10; i++)
// // //   {
// // //       cout << i << endl;
// // //   }

// // // int a = 6;
// // // int b = 5;
// // // cout << "a&b" << (a & b) << endl;
// // // cout << "a|b" << (a | b) << endl;
// // // cout << "a~b" << ~a << endl;
// // // cout << "a^b" << (a ^ b) << endl;
// // // cout << (8 << 1) << endl;
// // // cout << (10 << 1) << endl;
// // // cout << (19 << 1) << endl;
// // // cout << (21 << 2) << endl;
// // // int x;
// // // cin >> x;
// // // int ans = 0;
// // // // int i = 0;
// // // while (x != 0)
// // // {
// // //   int digit = x % 10;
// // //   ans = (ans * 10) + digit;
// // //   x = x >> 1;
// // //   x = x / 10;
// // //   // i++;
// // // }
// // // cout << ans << endl;
// // // int star;
// // // cin >> star;
// // // int row = 1;
// // // while (row <= star)
// // // {
// // //   int space = row - 1;
// // //   while (space)
// // //   {
// // //     cout << " ";
// // //     space = space - 1;
// // //   }
// // //   int col = 1;
// // //   while (col <= row)
// // //   {
// // //     cout << row;
// // //     col = col + 1;
// // //   }
// // //   cout << endl;
// // //   row = row + 1;
// // // }*/
// // // void reversedArray(int arr[], int size)
// // // {
// // //   // int rev;
// // //   for (int i = size - 1; i >= 0; i--)
// // //   {
// // //     cout << arr[i] << " ";
// // //   }
// // //   cout << endl;
// // // }
// // // int main()
// // // {
// // //   int arr[5] = {1, 2, 3, 4, 5};
// // //   cout << "revesed array: ";
// // //   reversedArray(arr, 5);
// // //   return 0;
// // // }
// // #include <bits/stdc++.h>
// // using namespace std;

// // // Function to find the pivot (smallest element) in a rotated sorted array
// // int getPivot(vector<int>& arr, int n) {
// //     int s = 0, e = n - 1;
// //     while (s < e) {
// //         int mid = s + (e - s) / 2;
// //         if (arr[mid] >= arr[0]) {
// //             s = mid + 1; // Pivot is in the right part
// //         } else {
// //             e = mid; // Pivot is in the left part
// //         }
// //     }
// //     return s; // Pivot index
// // }

// // // Standard binary search function
// // int binarySearch(vector<int>& arr, int s, int e, int k) {
// //     while (s <= e) {
// //         int mid = s + (e - s) / 2;
// //         if (arr[mid] == k) {
// //             return mid; // Key found
// //         } else if (arr[mid] < k) {
// //             s = mid + 1; // Search in the right half
// //         } else {
// //             e = mid - 1; // Search in the left half
// //         }
// //     }
// //     return -1; // Key not found
// // }

// // // Function to search for a key in a rotated sorted array
// // int search(vector<int>& arr, int n, int k) {
// //     int pivot = getPivot(arr, n);

// //     // Search in the two sorted halves
// //     if (k >= arr[pivot] && k <= arr[n - 1]) {
// //         return binarySearch(arr, pivot, n - 1, k); // Right sorted part
// //     } else {
// //         return binarySearch(arr, 0, pivot - 1, k); // Left sorted part
// //     }
// // }

// #include <iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<"*";
//             col++;
//         }
//         row++;
//         cout<<endl;

//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>=0;i--){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j>=0;j--){
//             cout<<"*";
//         }
//         for(int j=1;j>=0;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
