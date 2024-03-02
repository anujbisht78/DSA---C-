// I N T E R S E C T I O N OF ARRAY OR VECTOR

#include <bits\stdc++.h>
using namespace std;

int main()
{

    vector<int> v1;
    int size1;
    cout << "Enter the Size of 1st Vector: \n";
    cin >> size1;

    vector<int> v2;
    int size2;
    cout << "Enter the Size of 2nd Vector: \n";
    cin >> size2;

    cout << "Enter the Elements of 1st vector: ";
    for (int i = 0; i < size1; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    cout << endl;
    cout << "Enter the Elements of 2nd vector: ";

    for (int i = 0; i < size2; i++)
    {
        int y;
        cin >> y;
        v2.push_back(y);
    }

    cout << "Elements of 1st vector are: ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << "Elements of 2nd vector are: ";
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    // 1st APPROACH
    // BUT IT WILL GIVE YOU TIME LIMIT EXCEED
    vector<int> v;

    for (int i = 0; i < v1.size(); i++)
    {
        int element = v1[i];
        for (int j = 0; j < v2.size(); j++)
        {
            if (element < v2[j])
            {
                break;
            }
            if (element == v2[j])
            {
                v.push_back(element);
                v2[j] = -4453;
                break;
            }
        }
    }

    // 2nd APPROACH
    // vector<int> v;

    // int i = 0, j = 0;
    // while (i < size1 && j < size2)
    // {
    //     if (v1[i] < v2[j])
    //     {
    //         i++;
    //     }
    //     else if (v1[i] == v2[j])
    //     {
    //         v.push_back(v1[i]);
    //         i++;
    //         j++;
    //     }
    //     else
    //     {
    //         j++;
    //     }
    // }
    cout << endl;
    cout << "After Intersection: \n";
    cout << "Elements are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}