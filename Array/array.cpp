// Array

#include <iostream>
using namespace std;
int main()
{
    // Declaring the Array
    // int arr[5];

    // Accessing the Array
    int arr[5] = {2, 4, 6, 8, 10};
    cout << "value at 2 index  is " << arr[2] << endl;
    cout << "value at 0 index  is " << arr[0] << endl;
    cout << "value at 4 index  is " << arr[4] << endl;

    // Printing all the elements of Array
    for (int i = 0; i < 5; i++)
    {
        cout
            << arr[i] << " ";
    }

    cout << endl
         << "Everything is Fine";
    return 0;
}