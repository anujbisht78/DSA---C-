#include <bits/stdc++.h>
using namespace std;
int main()
{
    // syntax
    // stack<string> s;
    // s.push("Rahul");
    // s.push("Ajay");
    // s.push("Anuj");
    // cout << "Top ELement is : " << s.top();
    // cout << endl;

    // // REMOVIG THE LAST ELEMENT
    // s.pop();
    // cout << "Top ELement is : " << s.top();
    // cout << endl;

    // // FINDING THE SIZE
    // cout << "Size of Stack is : " << s.size();

    // TAKING INPUT OF STACK FROM THE USER
    stack<string> a;
    int size;
    cout << "Enter the Size\n";
    cin >> size;
    cout << "Enter the Elements: ";
    for (char i = 0; i < size; i++)
    {
        string x;
        cin >> x;
        a.push(x);
    }
    cout << endl;
    cout << "Elements are: ";
    while (!a.empty())
    {
        cout << a.top() << " ";
        a.pop();
    }
    cout << endl;
    cout << "Top Elememt is : " << a.top();

    return 0;
}