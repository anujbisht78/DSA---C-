// Find the Unique element in Given Array

#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {2, 4, 5, 2, 7, 4, 5};
    int ans = 0;

    for (int i = 0; i < 7; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "Unique Element is " << ans;
    return 0;
}
