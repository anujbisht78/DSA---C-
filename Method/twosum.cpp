#include <bits\stdc++.h>
using namespace std;

// // TWO POINTER APPROACH
// bool Twosum(int arr[], int size, int x)
// {
//     cout << "Elements are: ";
//     int i = 0, j = size - 1;
//     while (i < j)
//     {
//         if (arr[i] + arr[j] == x)
//         {
//             cout << arr[i] << " " << arr[j];
//             cout << endl;
//             return 1;
//         }
//         else if (arr[i] + arr[j] > x)
//         {
//             j--;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     return 0;
// }
// //BRUTE FORCE APPROACH
// bool Twosum(int arr[], int size, int x)
// {
//     cout << "Two pairs are: ";
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] + arr[j] == x)
//             {
//                 cout << arr[i] << " " << arr[j];
//                 cout << endl;
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }
int main()
{
    int size;
    cout << "Enter the Size: ";
    cin >> size;
    int arr[size];
    cout << "Enter the Elements: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "After sorting: ";
    sort(arr, arr + size);
    cout << "Elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int x;
    cout << "Enter the Sum: ";
    cin >> x;

    if (Twosum(arr, size, x))
    {
        cout << "Value Pairs exist";
    }
    else
    {
        cout << "Values pais do not exist for " << x << endl;
    }

    return 0;
}