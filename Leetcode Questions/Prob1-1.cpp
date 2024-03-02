// REVERSE a integer and it should be in the range of int() and if it is greater and less than the range Return 0

#include <iostream>

using namespace std;
int main()
{
    int n, ans = 0;
    cin >> n;

    while (n != 0)
    {
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }
    cout << ans << endl;
    return 0;
}