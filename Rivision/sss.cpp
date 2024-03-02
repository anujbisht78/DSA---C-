#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[1000];
    cout << "Enter the Elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }
    cout << "Duplicate value is: " << ans;
    return 0;
}