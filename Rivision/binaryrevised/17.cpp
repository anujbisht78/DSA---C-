#include <iostream>
using namespace std;
int linear(int arr[], int key)
{
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[7] = {4, 6, 2, 7, 8, 3, 9};
    int key;
    cout << "Enter the key value: ";
    cin >> key;
    cout << endl;
    cout << "Element is found at index " << linear(arr, key);

    return 0;
}