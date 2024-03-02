#include <bits/stdc++.h>
using namespace std;
int find(vector<int> v, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> v;
    int n = v.size();
    cout << "Enter the size; ";
    cin >> n;
    cout << "Enter the Elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    int key;
    cout << "Enter the Key: ";
    cin >> key;
    cout << "Element found at index: " << find(v, n, key);
    return 0;
}