//  Array Scope

#include <iostream>
using namespace std;
void update(int arr[], int size)
{
    arr[0] = 120;
    cout << "Printing Upadated Array " << endl;
    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Back to main() " << endl;
}

int main()
{
    int arr[3] = {1, 2, 3};

    update(arr, 3);

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// In the Output we also get the Updated array