// function of even odd

#include <iostream>
using namespace std;

int evodd(int num1)
{
    if (num1 % 2 == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int a;
    cin >> a;

    // int answer = evodd(a);
    // cout << answer << endl;
    if (1 == evodd(a))
    {
        cout << "Number is Even";
    }
    else
    {
        cout << "Number is Odd";
    }

        return 0;
}