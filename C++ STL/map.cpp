#include <bits\stdc++.h>
using namespace std;
int main()
{
    // SYNTAX=> IT CONTAINS KEY AND VALUE
    // map<int, int> mpp;

    // KEY IN PAIR
    //  map<pair<int, int>, int> mpp;

    // VALUE IN PAIR
    //  map<int, pair<int, int>> mpp;

    // MAP IN ITERATOR
    // map<int, int>::iterator it;

    // ADDING THE ELEMENTS
    // mpp[1] = 2;
    // // mpp.emplace({2, 4});
    // mpp.insert({2, 4});
    // mpp.insert({3, 1});
    // mpp.insert({5, 7});
    // mpp.insert({4, 9});

    // // Displaying the Elements
    // for (auto it : mpp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    // cout << "Size of map is: " << mpp.size() << endl;

    // TAKING INPUT OF MAP FROM THE USER AND DISPLAY IT ON THE SCREEN
    // map<int, int> mpp;

    // int size;
    // cout << "Enter the size: \n";
    // cin >> size;

    // cout << "Enter the Keys and values: \n";

    // for (int i = 0; i < size; i++)
    // {
    //     int x, y;
    //     cin >> x >> y;
    //     mpp.insert({x, y});
    // }

    // cout << "Elements are: \n";

    // for (auto it : mpp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    // TAKING INPUT OF MAP FROM THE USER AND DISPLAY IT ON THE SCREEN
    // map<int, int> mpp;

    // int size;
    // cout << "Enter the size: \n";
    // cin >> size;

    // cout << "Enter the Keys and values: \n";

    // for (int i = 0; i < size; i++)
    // {
    //     int x, y;
    //     cout << "Enter the keys: ";

    //     for (i = 0; i < size; i++)
    //     {
    //         cin >> x;
    //             }

    //     cout << "Enter the value: ";

    //     int j = 0;
    //     while (j < size)
    //     {
    //         cin >> y;
    //         break;
    //     }
    //     j++;
    //     mpp[x] = y;
    // }

    // cout << "Elements are: \n";

    // for (auto it : mpp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    // INPUT OF KEY PAIR IN THE MAP FRPM THE USER AND DISPALYING IT
    // map<pair<int, int>, int> mpp;
    // int size;
    // cout << "Enter the size: \n";
    // cin >> size;

    // cout << "Enter the keys and values: \n";
    // for (int i = 0; i < size; i++)
    // {
    //     int x, y, z;
    //     cin >> x >> y >> z;
    //     mpp[{x, y}] = z;
    // }
    // cout << endl;
    // cout << "Elements are: \n";
    // for (auto it : mpp)
    // {
    //     cout << "[";

    //     cout << "{" << it.first.first << "," << it.first.second << "}"
    //          << " "
    //          << "," << it.second;
    //     cout << "]";
    //     cout << endl;
    // }

    // INPUT OF VALUE PAIR IN THE MAP FRPM THE USER AND DISPALYING IT
    // map<int, pair<int, int>> mpp;
    // int size;
    // cout << "Enter the size: \n";
    // cin >> size;

    // cout << "Enter the keys and values: \n";
    // for (int i = 0; i < size; i++)
    // {
    //     int x, y, z;
    //     cin >> x >> y >> z;
    //     mpp[x] = {y, z};
    // }
    // cout << endl;
    // cout << "Elements are: \n";
    // for (auto it : mpp)
    // {
    //     cout << "[";

    //     cout << it.first << " , "
    //          << "{" << it.second.first << "," << it.second.second << "}";

    //     cout
    //         << "]";
    //     cout << endl;
    // }

    // FUNCTIONS PERFORMED IN THE MAP
    map<int, int> mpp;
    mpp.insert({2, 3});
    mpp.insert({5, 3});
    mpp.insert({4, 9});
    mpp.insert({6, 7});
    mpp.insert({1, 3});

    cout << "Key value is--> " << mpp[2];
    cout << endl;
    cout << "Key value is--> " << mpp[4];

    auto it = mpp.find(9);

    return 0;
}