#include <iostream>
#include <math.h>
using namespace std;
int sortArrays(int arr[], int size)
{

    // Sorting using a single loop
    for (int j = 0; j < size - 1; j++)
    {
        // Checking the condition for two
        // simultaneous elements of the array
        if (arr[j] > arr[j + 1])
        {
            // Swapping the elements.
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;

            // updating the value of j = -1
            // so after getting updated for j++
            // in the loop it becomes 0 and
            // the loop begins from the start.
            j = -1;
        }
    }
    return arr;
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
    cout << "Before Sorting\n";
    cout << "Elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "After Sorting\n";
    cout << "Elements Are: ";
    int arr1;

    arr1 = sortArrays(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}