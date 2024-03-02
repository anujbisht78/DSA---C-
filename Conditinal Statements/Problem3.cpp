#include <iostream>
using namespace std;
int main()
{
    int a = 24;
    // Here if the First Condition is true it will not go to the other else if Condition
    if (a > 20)
    {
        cout << "Love" << endl;
    }
    else if (a == 24)
    {
        cout << "yo";
    }
    else
    {
        cout << "Anuj";
    }
    cout << a;
    return 0;
}