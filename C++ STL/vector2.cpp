#include <bits/stdc++.h>
using namespace std;
void explainvector()
{
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(3);

    // vector using pair
    vector<pair<int, int>> v;
    // v.push_back({1, 3});
    // v.emplace_back(2, 5);

    // vector<pair<int, int>> V;
    // V = {{1, 2}, {3, 4}, {7, 8}};

    // for (int i = 0; i < V.size(); i++)
    // {
    //     cout << V[i].first << " " << V[i].second << endl;
    // }
    // cout << " size of vector " << V.size();

    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // I T E R A T O R
    // vector<int> v = {1, 2, 3, 4, 5};
    // vector<int>::iterator it = v.begin();

    // cout << *(it) << endl;
    // it++;
    // cout << *(it) << endl;
    // it = it + 2;
    // cout << *(it) << endl;

    // cout << "Before Erasing" << endl;
    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // // Erasing the element
    // cout << "After Erasing" << endl;

    // // v.erase(v.begin());
    // // v.erase(v.begin() + 1);

    // // v.erase(v.begin() + 1, v.begin() + 3);
    // v.erase(v.begin() + 1);
    // v.erase(v.begin() + 3);

    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // cout << "After Insertion" << endl;

    // // I N S E R T Function
    // v.insert(v.begin() + 1, 6);
    // v.insert(v.begin() + 1, 2, 6);

    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }

    // INPUT FROM THE USER
    // vector<int> v;
    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // PRINTING NORMALLY

    // 1st METHOD
    //  for (int i = 0; i < v.size(); i++)
    //  {
    //      cout << v[i] << " ";
    //  }

    // 2nd METHOD

    // for (int i : v)
    // {
    //     cout << i << " ";
    // }

    // PRINTING USING I T E R A T O R
    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }

    // PAIR INPUT FROM THE USER
    vector<pair<int, int>> v;
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << "size of vector is " << v.size() << endl;
}

int main()
{
    explainvector();

    return 0;
}