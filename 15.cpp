// 2-D arrays and nested for loops
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    // // cout << arr[0][1] << " " << arr[2][0] << endl; // 2 5
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    // }

    // 1-D array
    // int arr1[5] = {1, 2, 3, 4, 5};
    // int *ptr = arr1;
    // for (size_t i = 0; i < 5; i++)
    // {
    //     cout << *(ptr + i) << " ";
    // }

    // 2-D array
    int arr2[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    // int (*ptr1)[2] = arr2;
    int(*ptr1)[4];
    ptr1 = &arr2[0];
    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
    {
        for (int j = 0; j < sizeof(arr2[0]) / sizeof(arr2[0][0]); j++)
        {
            cout << ptr1[i][j] << " ";
        }
    }

    return 0;
}