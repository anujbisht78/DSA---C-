#include <bits/stdc++.h>
using namespace std;
vector<int> inter(vector<int> v1, vector<int> v2, int n, int m)
{
    vector<int> v3;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (v1[i] < v2[j])
        {
            i++;
        }
        else if (v1[i] == v2[j])
        {
            v3.push_back(v1[i]);
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return v3;
}
int main()
{
    vector<int> v1;
    int n = v1.size();
    cout << "Enter the size of the v1: ";
    cin >> n;
    vector<int> v2;
    int m = v2.size();
    cout << "Enter the size of v2: ";
    cin >> m;
    cout << "Enter the elements of v1: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    cout << "Enter the elements of v2: ";
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        v2.push_back(y);
    }

    cout << "elements of v1: ";
    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << "elements of v2: ";
    for (int i = 0; i < m; i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    cout << "After Intersection: ";
    vector<int> v = inter(v1, v2, n, m);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}