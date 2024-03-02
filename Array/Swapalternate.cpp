// Swapping Alternate elements

#include <iostream>
using namespace std;

void Altswap(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
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
    printArray(brr, 5);

    return 0;
}