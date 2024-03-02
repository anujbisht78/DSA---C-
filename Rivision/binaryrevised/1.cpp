// BINARY SEARCH
#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> v, int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (v[mid] == key)
        {
            return mid;
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
    return -1;
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

    cout << "Element is found at index: " << binarysearch(v, n, key);

    return 0;
}