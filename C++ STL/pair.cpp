#include <bits/stdc++.h>
using namespace std;

void explainpair()
{
    pair<int, int> p = {1, 3};
    cout << "First Element--> " << p.first << endl;
    cout << "Second Element--> " << p.second << endl;

    // Nested Pair
    pair<int, pair<int, int>> a = {1, {3, 4}};
    cout << "First Element--> " << a.first << endl;

    // cout << "Second Element--> " << a.second << endl;
    cout << "Second Element of seceond--> " << a.second.second << endl;

    // pair Array
    pair<int, int> arr[3] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[2].second << endl;
}

int main()
{
    explainpair();

    return 0;
}
