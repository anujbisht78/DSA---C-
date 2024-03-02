// Power of 2
// given an Integer , return true if it is a Power of 2 otherwise False. interger is a power of 2 such that n=2^x

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;

    for (int i = 0; i <= 30; i++)
    {
        ans = pow(2, i);

        if (ans == n)
        {
            cout << "True" << endl;
        }
        }
    if (ans != 0)
    {
        cout << "False" << endl;
    }

    // return false;

    return 0;
}