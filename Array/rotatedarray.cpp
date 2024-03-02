// SEARCH IN A ROTATED ARRAY
#include <iostream>
using namespace std;
int Pivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[0] <= arr[mid])
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
int binary(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = s + (e - s) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
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
    int key;
    cout << "Enter the key: ";
    cin >> key;

    int pivot = Pivot(arr, size);
    if (arr[pivot] <= key && key <= arr[size - 1])
    {
        cout << "Element is Found at index: " << binary(arr, pivot, size - 1, key);
    }
    else
    {
        cout << "Element is Found at index: " << binary(arr, 0, pivot - 1, key);
    }
    return 0;
}
