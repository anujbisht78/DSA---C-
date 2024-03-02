#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // v = {2, 3, 4, 6, 5};

    vector<vector<int>> A;
    vector<vector<vector<int>>> A;

    int n;

    cout << " Enter thr size of parent vector " << endl;
    cin >> n;

    int m;
    cout << " Enter thr size of child vector " << endl;
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        A.push_back(temp);
    }

    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << A.back().front();
    // int target;
    // cout << "Enter the target" << endl;
    // cin >> target;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v.size(); j++)
    //     {
    //         if (v[i] + v[j] == target)
    //         {
    //             cout << v[i] << " " << v[j] << endl;
    //             return 0;
    //         }
    //     }
    // }

    return 0;
}