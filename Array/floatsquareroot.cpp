// FIND THE FLOAT PART OF THE SQUARE ROOT
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
double floatPart(int x, int precesion, int temp)
{
    double factor = 1;
    double ans = temp;
    for (int i = 0; i < precesion; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < x; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int x;
    cout << "Enter the value: ";
    cin >> x;
    int temp = Square(x);
    cout << "Square root of " << x << " is " << floatPart(x, 3, temp);

    return 0;
}