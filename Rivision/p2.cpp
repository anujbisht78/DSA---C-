// Checking the Size of the variable
#include <iostream>
using namespace std;
int main()
{
    int a = 23;
    float b = 17.3;
    char ch = 'a';
    double d = 1.43;

    int size = sizeof(a);
    cout
        << "Size of a is " << size << endl;

    int size1 = sizeof(b);
    cout
        << "Size of b is " << size1 << endl;

    int size2 = sizeof(ch);
    cout
        << "Size of ch is " << size2 << endl;

    int size3 = sizeof(d);
    cout
        << "Size of d is " << size3 << endl;

    return 0;
}