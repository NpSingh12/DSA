// scope ;
#include <iostream>
using namespace std;
void update(int arr[], int n)
{
    cout << "Update function calll" << endl;
    ;
    // it update the origina, value because the main arr pass the array first addres to this function so it update both value;
    arr[0] = 120;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // return update;
}
int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);
    cout << "main function call" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}