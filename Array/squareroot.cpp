// SQUARE ROOT USING BINARY SEARCH
#include <iostream>
using namespace std;
long long int Square(int x)
{
    int s = 0;
    int e = x;
    long long int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        long long int sqa = mid * mid;

        if (sqa == x)
        {
            return mid;
        }
        if (sqa > x)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int x;
    cout << "Enter the value: ";
    cin >> x;
    cout << "Squareroot of " << x << " is " << Square(x);

    return 0;
}