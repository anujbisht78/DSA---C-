// REVERSE a integer and it should be in the range of int() and if it is greater and less than the range Return 0

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, ans = 0;
    cin >> n;
    // int int_min = (pow(2, -31));
    // int int_max = (pow(2, -31) - 1);

    while (n != 0)
    {

        int digit = n % 10;
        ans = (ans * 10) + digit;
        n = n / 10;

        // for keeping it in the range
        // if ((ans > int_max / 10) || (ans < int_min / 10))
        // {
        //     return 0;
        // }
    }

    cout << ans << endl;

    return 0;
}