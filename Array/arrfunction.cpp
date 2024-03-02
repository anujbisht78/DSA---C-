// Playing Array with Function
// Printing Array elements

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int A[15];
    printArray(A, 15);

    cout << endl;

    int B[5] = {2, 7};
    printArray(B, 5);

    cout << endl;

    int C[5] = {2, 4, 6, 8, 10};
    printArray(C, 5);

    cout << endl
         << "Everything is Fine";

    return 0;
}