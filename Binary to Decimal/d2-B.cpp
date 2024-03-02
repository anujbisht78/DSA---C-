// Convertion of a -Ve Decimal number into Binary

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i = 0, ans = 0;
    cin >> n;
    int m = n;

    if (n < 0)
    {
        n = -1;
    }
    while (n != 0)
    {
        int bit = n & 1;
        n = n >> 1;

        ans = (bit * pow(10, i)) + ans;
        i++;
    }
    if (m < 0)
    {
        cout << "-" << ans << endl;
    }
    else
    {
        cout << ans << endl;
    }
    return 0;
}