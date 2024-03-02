// A B C D
// E F G H
// I J K L
// M N O P
#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A';
        while (j <= n)
        {

            cout << ch;
            ch = ch + 1;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}