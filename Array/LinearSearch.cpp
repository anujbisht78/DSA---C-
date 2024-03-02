// Linear Search

#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[10] = {2, 5, 4, 7, 34, 24, 54, 3, 8, 97};

    int key;
    cout << "Enter the Key value\n";
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "key Found " << endl;
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}