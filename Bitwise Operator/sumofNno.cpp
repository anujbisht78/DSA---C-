// Sum Of N Natural Numbers
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of N Natural Number is " << sum << endl;
    return 0;
}