// Linear search Without Function

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key;
    cout << "Enter the Key\n";
    cin >> key;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            cout << "Key is Found at " << i << endl;
            return 0;
        }
    }
    cout << "Not Found";

    return 0;
}