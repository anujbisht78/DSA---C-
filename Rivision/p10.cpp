// V E C T O R S with function

#include <bits/stdc++.h>
using namespace std;
// UNIQUE NUMBER OF OCCURENCES

// void Unique(vector<int> v, int size)
{
    //     int count = 1;
    //     vector<int> ans;
    //     cout << "Elements are: ";
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         cout << v[i] << " ";
    //     }
    //     cout << endl;
    //     cout << "After Sorting, Elements are: ";
    //     sort(v.begin(), v.end());
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         cout << v[i] << " ";
    //     }
    //     int i = 0;
    //     while (i < v.size())
    //     {

    //         for (int j = i + 1; j < v.size(); j++)
    //         {
    //             if (v[i] == v[j])
    //             {
    //                 count++;
    //             }
    //             else
    //             {
    //                 break;
    //             }
    //         }
    //         ans.push_back(count);

    //         i = i + count;
    //     }
    //     cout << endl;

    //     cout << "After sorting, Counted Numbers are: ";
    //     sort(ans.begin(), ans.end());
    //     for (int i = 0; i < ans.size(); i++)
    //     {
    //         cout << ans[i] << " ";
    //     }
    //     cout << endl;
    //     for (int i = 0; i < ans.size(); i++)
    //     {
    //         if (ans[i] != ans[i + 1])
    //         {
    //             cout << "There are Unique no. of Elements\n";
    //         }
    //         else
    //         {
    //             cout << "There are not Unique no. of Elements\n";
    //         }
    //     }
    // }

    // TAKING INPUT FROM THE USER AND PRINTING THEM USING ITERATION

    // void iteratorVector(vector<int> v, int size)
    // {
    //     cout << "Elements are: ";
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         cout << v[i] << " ";
    //     }
    //     cout << endl;
    //     cout << "Elements after Iteration: ";
    //     vector<int>::iterator it;
    //     for (auto it = v.begin(); it != v.end(); it++)
    //     {
    //         cout << *(it) << " ";
    //     }
    // }

    // TALING INPUT OF VECTOR PAIRS AND DISPLAYING THEM WITH FUNCTION

    // void pairs(vector<pair<int, int>> v, int size)
    // {
    //     cout << "Elements are: \n";
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         cout << "[" << v[i].first << " , " << v[i].second << "]" << endl;
    //     }
    // }

    // INPUT OF VECTOR FROM THE USER AND DISPLAYING IT

    // void printVector(vector<int> v, int size)
    // {
    //     cout << "Elements are: ";

    //     // FIRST METHOD
    //     // for (int i = 0; i < v.size(); i++)
    //     // {
    //     //     cout << v[i] << " ";
    //     // }

    //     // ANOTHER METHOD
    //     // for (auto i : v)
    //     // {
    //     //     cout << i << " ";
    //     // }
    // }

    int main()
    {
        // INPUT OF VECTOR FROM THE USER AND DISPLAYING IT

        // vector<int> v;
        // int size;
        // cout << "Enter the size\n";
        // cin >> size;

        // cout << "Enter the Elements: ";
        // for (int i = 0; i < size; i++)
        // {
        //     int x;
        //     cin >> x;
        //     v.push_back(x);
        // }
        // printVector(v, size);

        // ADDING ELEMENTS IN THE VECTORS AND DISPLAYING THEM

        // vector<int> v;
        // v.push_back(2);
        // v.emplace_back(5);
        // v.push_back(4);
        // v.emplace_back(4);
        // v.push_back(6);
        // v.emplace_back(3);
        // v.push_back(8);
        // v.emplace_back(2);

        // ELEMENTS DISPLAYING USING PUSH_BACK

        // cout << "Elements Displaying using Push_back: \n";
        // v.push_back(2);
        // v.push_back(4);
        // v.push_back(6);
        // cout << "Elements are: ";
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << " ";
        // }

        // ELEMENTS DISPLAYING USING EMPLACE_BACK

        // cout << endl;
        // cout << "Elements Displaying using Emplace_back: \n";
        // v.emplace_back(5);
        // v.emplace_back(4);
        // v.emplace_back(3);
        // v.emplace_back(2);
        // cout << "Elements are: ";
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << " ";
        // }

        // ADDING PAIRS IN THE VECTORS

        // Declaration for Pair Vector
        // vector<pair<int, int>> v;
        // // v.push_back({1, 2});
        // // NOTE = Emplace_back will automatically consider the pair elements
        // v.emplace_back(1, 2);
        // for (auto i : v)
        // {
        //     cout << i.first << " " << i.second;
        // }

        // TALING INPUT OF VECTOR PAIRS AND DISPLAYING THEM WITH FUNCTION

        // vector<pair<int, int>> v;
        // int size;
        // cout << "Enter the Size: ";
        // cin >> size;

        // cout << "Enter the Pair:\n";
        // for (int i = 0; i < size; i++)
        // {
        //     int x, y;
        //     cin >> x >> y;
        //     v.push_back({x, y});
        // }
        // pairs(v, size);

        // ITERATION DECLARATION OF VECTOR

        // vector<int>::iterator it;
        // Performing Iteration on the given vector
        // vector<int> v = {2, 3, 4, 5, 6};
        // vector<int>::iterator it = v.begin();
        // cout << "Element is: ";
        // // cout << *(it);
        // // it++;
        // // cout << *(it);
        // it = it + 4;
        // cout << *(it);

        // TAKING VECTOR INPUT FROM THE USER AND PRINTING THEM USING ITERATION

        // vector<int> v;
        // int size;
        // cout << "Enter the Size: \n";
        // cin >> size;
        // cout << "Enter the Elements: ";
        // for (int i = 0; i < size; i++)
        // {
        //     int x;
        //     cin >> x;
        //     v.push_back(x);
        // }
        // iteratorVector(v, size);

        // FUNCTION WE PERFORMED ON THE VECTORS

        // vector<int> v = {2, 4, 6, 8, 10, 12};
        // cout << "Elements are: ";
        // cout << "[";
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i];
        //     if (i < v.size() - 1)
        //     {
        //         cout << ",";
        //     }
        // }
        // cout << "]";

        // cout << endl;

        // SIZE AND CAPACITY
        // cout << "Capacity of vector is: " << v.capacity();
        // cout << endl;
        // cout << "Size of vector is: " << v.size();

        // POP_BACK WHICH REMOVES THE LAST ELEMENT
        // cout << "Before Pop: \n";
        // cout << "Elements are: ";
        // for (auto i : v)
        // {
        //     cout << i << " ";
        // }
        // v.pop_back();
        // cout << endl;
        // cout << "After Pop: \n";
        // cout << "Elements are: ";
        // for (auto i : v)
        // {
        //     cout << i << " ";
        // }

        // DELETING THE ELEMENTS FROM THE VECTOR
        // cout << "Before Erasing \n";
        // cout << "Elements are: ";
        // cout << "[";
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << "]";
        // cout << endl;

        // v.erase(v.begin() + 2, v.begin() + 5);
        // cout << "After Erasing \n";
        // cout << "Elements are: ";
        // cout << "[";
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << "]";

        // UNIQUE NUMBER OF OCCURENCES
        // vector<int> v;
        // int size;
        // cout << "Enter the Size: ";
        // cin >> size;
        // cout << "Enter the Elements: ";
        // for (int i = 0; i < size; i++)
        // {
        //     int x;
        //     cin >> x;
        //     v.push_back(x);
        // }
        // Unique(v, size);

        return 0;
    }