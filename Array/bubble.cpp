// BUBBLE SORT
#include <bits\stdc++.h>
using namespace std;
vector<int> sort(vector<int> v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
    return v;
}
int main()
{
    vector<int> v;
    int n = v.size();
    cout << "Enter the size: ";
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
    cout << "After Sorting: ";
    vector<int> s = sort(v, n);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }

    return 0;
}