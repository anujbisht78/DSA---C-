// Making A Calculatorter  using switch Case

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;

    cout << "You Have Been Given the Operation\n";
    cout << "+ for ADDITION\n";
    cout << "- for SUBTRACTION\n";
    cout << "* for MULTIPLICATION\n";
    cout << "/ for DIVISION\n";
    cout << "%  for REMAINDER\n";

    cout << "Enter the value of a\n";
    cin >> a;
    cout << "Enter the value of b\n";
    cin >> b;
    cout << "Enter the Operation which you have to perform\n";
    cin >> op;

    switch (op)
    {
    case '+':

        cout << "a + b"
             << " " << '=' << " " << a + b << endl;

        break;
    case '-':

        cout << "a - b"
             << " " << '=' << " " << a - b << endl;

        break;
    case '*':

        cout << "a * b"
             << " " << '=' << " " << a * b << endl;

        break;
    case '/':

        cout << "a / b"
             << " " << '=' << " " << a / b << endl;

        break;
    case '%':

        cout << "a % b"
             << " " << '=' << " " << a % b << endl;

        break;
    }

    return 0;
}