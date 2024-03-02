// Switch Case Statement

#include <iostream>
using namespace std;
int main()
{
    int num = 2;

    switch (num)
    {
    case 1:
        cout << "First" << endl;
        break;

    case 2:
        cout << "second" << endl;
        break;

    default:
        cout << "This is Default case" << endl;
        break;
    }
    return 0;
}