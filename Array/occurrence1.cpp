// FISRT AND LAST OCCURRENCE OF THE ELEMENT IN THE VECTOR

#include <bits\stdc++.h>
using namespace std;
int firstocc(vector<int> v, int size, int key)
{
    int ans = -1;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (v[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (v[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastocc(vector<int> v, int size, int key)
{
    int ans = -1;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (v[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (v[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

pair<int, int> occ(vector<int> v, int size, int key)
{
    pair<int, int> p;
    p.first = firstocc(v, size, key);
    p.second = lastocc(v, size, key);

    return p;
}
int main()
{
    int size;
    cout << "Enter the Size; ";
    cin >> size;
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << endl;
    cout << "Elements are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    int key;
    cout << "Enter the Key: ";
    cin >> key;
    cout << "Occurrence of key at indexes: ";

    pair<int, int> p1 = occ(v, size, key);
    cout
        << p1.first << " " << p1.second;
    return 0;
}
