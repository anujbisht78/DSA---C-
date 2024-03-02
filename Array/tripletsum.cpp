// TRIPLET SUM OF VECTOR
#include <bits\stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    int size;
    cout << "Enter the Size: \n";
    cin >> size;
    cout << "Enter the Elements: ";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Elements are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    int target;
    cout << "Enter the Target: ";
    cin >> target;
    vector<int> p;

    // BRUTE FORCE APPROACH
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            for (int k = j + 1; k < v.size(); k++)
            {
                if (v[i] + v[j] + v[k] == target)
                {
                    p.push_back(v[i]);
                    p.push_back(v[j]);
                    p.push_back(v[k]);
                }
            }
        }
    }
    // sort(p.begin(), p.end());
    cout << "Elements are: ";

    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i] << " ";
    }
    return 0;
}