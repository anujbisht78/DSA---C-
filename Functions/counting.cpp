// Print Counting

#include <iostream>
using namespace std;
// function Signature (what type of function is this)
void princount(int n) // we use VOID beacuse the function is not returning the value
{
    // Function Body
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
        count++;
    }
}

int main()
{
    int n;
    cin >> n;
    // Function Call
    princount(n);

    return 0;
}