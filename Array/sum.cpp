// Sum of all elements in the Array by taking the input from the user

#include <iostream>
using namespace std;
int main()
{
    int size, sum = 0;
    cin >> size;
    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];

        sum = sum + arr[i];
    }
    cout << "Sum of All elements is " << sum << endl;

    return 0;
}