#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v = {2, 3, 3, 4};
    int val = 3;
    int i = 0;

    for (i = 0; i < v.size(); i++)
    {
        if (v[i] == val)
        {
            v.erase(v.begin() + v[i]);
            cout << v[i] << " ";
        }
    }

    return 0;
}