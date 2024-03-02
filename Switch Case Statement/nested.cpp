// Nested switch

#include <iostream>
using namespace std;
int main()
{
    int num = 2;
    char ch = 'a';

    switch (num)
    {
    case 1:
        cout << "First" << endl;
        break;

    case 2:
        switch (ch)
        {
        case 'a':
            cout << "Hello" << endl;
        }

        break;

    default:
        cout << "This is Default case" << endl;
        break;
    }
    return 0;
}