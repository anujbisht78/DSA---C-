#include <iostream>
using namespace std;

// int power(int num1, int num2)
// {
//     int ans = 1;

//     for (int i = 1; i <= num2; i++)
//     {
//         ans = ans * num1;
//     }
//     return ans;
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     int answer = power(a, b);
//     cout << "Answer is " << answer << endl;

// if i want to make it more small

int power(int num1, int num2)
{
    cin >> num1 >> num2;
    int ans = 1;

    for (int i = 1; i <= num2; i++)
    {
        ans = ans * num1;
    }
    return ans;
}

int main()
{
    int a, b;
    int answer = power(a, b);
    cout << "Answer is " << answer << endl;

    int c, d;
    int answer1 = power(c, d);
    cout << "Answer is " << answer1 << endl;

    return 0;
}