// PEAK INDEX
#include <bits/stdc++.h>
using namespace std;
int peak(vector<int> v, int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (v[mid] < v[mid + 1])
        {

            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}
int main()
{
    vector<int> v;
    int n = v.size();
    cout << "Enter the size :";
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
    cout << "Peak element is at index: " << peak(v, n);

    return 0;
}