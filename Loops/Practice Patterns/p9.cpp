// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        int value = i;
        while (j <= i)
        {
            cout << value << " ";
            value = value + 1;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}