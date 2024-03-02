// Given an Integer and Find the difference of the Product and Sum of the Digits

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number\n";
    cin >> n;
    int prod = 1;
    int sum = 0;

    while (n != 0)
    {
        int digit = n % 10;

        prod = prod * digit;
        sum = sum + digit;
        n = n / 10;
    }
    int diff = prod - sum;
    cout << diff << endl;
    return 0;
}