// Check wheather the Number is Prime or Not

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        if (n % i != 0)
        {
            cout << i << " "
                 << "Prime Number" << endl;
            break;
        }
        else
        {
            cout << i << " "
                 << "Not Prime" << endl;
        }
    }
    return 0;
}