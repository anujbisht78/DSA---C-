// #Insertion Sort
#include <bits\stdc++.h>
using namespace std;
vector<int> sort(vector<int> v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[minindex])
            {
                swap(v[j], v[minindex]);
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
    vector<int> s = sort(v, n);
    cout << "After Sorting :";
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
    return 0;
}