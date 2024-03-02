// checl wheather the  number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // while (i < n)
    // {
    //     if (n % i != 0)
    //     {
    //         cout << "Prime Number" << endl;
    //     }
    //     else
    //     {
    //         cout << "Not Prime";
    //     }
    //     i++;
    // }

    for (int i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            cout << "Prime Number" << endl;
        }
        else
        {
            cout << "Not Prime";
        }
    }

    return 0;
}