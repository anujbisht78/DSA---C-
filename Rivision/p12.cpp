#include <iostream>
using namespace std;
int max(int arr[], int n)
{
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int min(int arr[], int n)
{
    int min = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int n;
    cout << "Enter the Size";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Max Element: " << max(arr, n) << endl;

    cout << "Min Element: " << min(arr, n);

    return 0;
}