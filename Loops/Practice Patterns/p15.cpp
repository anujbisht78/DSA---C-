// A
// B B
// C C C
// D D D D

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - 1;
        while (j <= i)
        {
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}