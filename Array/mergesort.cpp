// MERGING THE TWO SORTED ARRAY AND STORING THEM IN ANOTHER ARRAY
#include <bits\stdc++.h>

using namespace std;
vector<int> merge(vector<int> v, int m, vector<int> s, int n)
{
    vector<int> p = {};
    int a = p.size();
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m && j < n)
    {
        if (v[i] < s[j])
        {
            p[k] = v[i];
            k++;
            i++;
        }
        else
        {
            p[k] = s[j];
            k++;
            j++;
        }
    }
    while (i < m)
    {
        p[k] = v[i];
        k++;
        i++;
    }
    while (j < n)
    {
        p[k] = s[j];
        k++;
        j++;
    }
    return p;
}

int main()
{
    vector<int> v;
    int m = v.size();
    cout << "Enter the size of 1st vector: ";
    cin >> m;
    cout << "Enter the Elements of 1st vector: ";
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> s;
    int n = s.size();
    cout << "Enter the size of 2st vector: ";
    cin >> n;
    cout << "Enter the Elements of 2nd vector: ";
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        s.push_back(y);
    }
    cout << "Elements of 1st vector: ";
    for (int i = 0; i < m; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "Elements of 2nd vector: ";
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;

    cout << "After Merging them: ";
    vector<int> b = merge(v, m, s, n);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}