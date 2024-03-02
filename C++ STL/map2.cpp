#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;

    // ADDING ELEMENTS
    m[1] = "abc";
    m[2] = "bca";
    m[3] = "cab";
    // USING ANOTHER ELEMENT
    m.insert({4, "def"});

    // Displaying the Map
    // map<int, string>::iterator it;

    // for (it = m.begin(); it != m.end(); ++it)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    // ANOTHER METHOD
    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}