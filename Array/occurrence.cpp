// FISRT AND LAST OCCURRENCE IN THE ARRAY
#include <iostream>

using namespace std;
int firstocc(int arr[], int size, int key)
{
    int ans = -1;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastocc(int arr[], int size, int key)
{
    int ans = -1;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;
    int arr[size];
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
    int key;
    cout << "Enter the key: ";
    cin >> key;

    cout << "Occurrence of key at indexes: " << firstocc(arr, size, key) << " " << lastocc(arr, size, key);

    return 0;
}