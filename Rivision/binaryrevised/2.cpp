// FIRST AND LAST OCCURRENCE
#include <bits/stdc++.h>
using namespace std;
int fisrtOcc(vector<int> v, int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (v[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (v[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int lastOcc(vector<int> v, int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (v[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (v[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
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
    int key;
    cout << "Enter the key";
    cin >> key;

    pair<int, int> p;
    p.first = fisrtOcc(v, n, key);
    p.second = lastOcc(v, n, key);
    cout << "First and Last Occ of Elements are: " << p.first << " " << p.second;

    return 0;
}