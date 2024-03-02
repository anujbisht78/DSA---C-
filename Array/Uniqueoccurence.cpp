// Unique Number of Occurrence

#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 3, 4, 1, 1, 4, 3, 3, 1, 4};
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "True\n";
            }
            else
            {
                cout << "False\n";
            }
            count++;
        }
    }
    return 0;
}