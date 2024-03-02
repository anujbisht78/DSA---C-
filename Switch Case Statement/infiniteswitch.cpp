// if switch case in the infinite loop and we have to come out from it without using break; statement

#include <iostream>
using namespace std;
int main()
{
    while (1)
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
    }
    exit;

    return 0;
}