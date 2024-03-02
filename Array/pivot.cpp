// FIND THE PIVOT INDEX OF THE ELEMENT
#include <iostream>
using namespace std;
int Pivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
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
    cout << "Elements Are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Pivot Element is at index: " << Pivot(arr, size);

    return 0;
}