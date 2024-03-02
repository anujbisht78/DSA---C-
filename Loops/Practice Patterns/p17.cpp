// A
// B C
// D E F
// G H I J

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            char ch = 'A';
            cout << ch << " ";
            ch = ch + 1;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}