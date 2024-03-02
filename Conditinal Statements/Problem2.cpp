#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = a + 1;

    if ((a = 3) == b) // here we assign the value of a thats why we get 3 in the output
    {
        cout << a << "This Value";
    }
    else
    {
        cout << a + 1;
    }

    return 0;
}