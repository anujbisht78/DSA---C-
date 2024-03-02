// Swapping without swap
// Swapping Alternate elements

#include <iostream>
using namespace std;

void Altswap(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        int temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {2, 1, 4, 3, 6, 5};
    int brr[5] = {4, 2, 8, 6, 10};

    Altswap(arr, 6);
    Altswap(brr, 5);

    printArray(arr, 6);
    printArray(brr, 6);

    return 0;
}