// Printing the simple Program of hello World
// Talking to the computer
#include <iostream>
using namespace std;
int main()
{
    cout << "Hey, I am C++. Whats your Name?" << endl;
    string name;
    getline(cin, name);
    cout << "Hello " << name << ". What's Up!" << endl;

    // cout << "Hello world" << endl;
    return 0;
}