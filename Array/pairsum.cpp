// PAIR SUM OF VECTOR OR ARRAY

#include <bits\stdc++.h>
using namespace std;
// void PairSum(vector<int> v, int size)
// {
//     int target;
//     cout << "Enter the Target: ";
//     cin >> target;
//     vector<int> p;
//     int i = 0, j = size - 1;
//     while (i < j)
//     {
//         if (v[i] + v[j] == target)
//         {
//             p.push_back(min(v[i], v[j]));
//             p.push_back(max(v[i], v[j]));
//         }
//         else if (v[i] + v[j] > target)
//         {
//             j--;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     cout << "Elements are: ";
//     for (int i = 0; i < p.size(); i++)
//     {
//         cout << p[i];
//     }
// }
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

    // 2 POINTER APPROACH
    int i = 0, j = v.size() - 1;
    while (i < j)
    {
        if (v[i] + v[j] == target)
        {
            p.push_back(min(v[i], v[j]));
            p.push_back(max(v[i], v[j]));
            break;
        }
        else if (v[i] + v[j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    // // BRUTE FORCE
    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = i + 1; j < v.size(); j++)
    //     {
    //         if (v[i] + v[j] == target)
    //         {
    //             p.push_back(min(v[i], v[j]));
    //             p.push_back(max(v[i], v[j]));
    //         }
    //     }
    // }
    cout << "Elements are: ";

    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i] << " ";
    }

    return 0;
}