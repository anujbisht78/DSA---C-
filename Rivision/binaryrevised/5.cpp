// SEARCH IN ROTATED SORTED ARRAY
#include <bits/stdc++.h>
using namespace std;
int pivot(vector<int> v, int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (v[mid] > v[0])
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
int binary(vector<int> v, int key, int s, int e)
{
    int start = s;
    int end = e;
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
int search(vector<int> v, int n, int key)
{
    int Pivot = pivot(v, n);

    if (v[Pivot] <= key && key <= v[n - 1])
    {
        return binary(v, key, Pivot, n - 1);
    }
    else
    {
        return binary(v, key, 0, Pivot);
    }
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
    cout << "Enter the key: ";
    cin >> key;
    cout << "The Element is found at index: " << search(v, n, key);
    return 0;
}