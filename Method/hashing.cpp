#include <bits\stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;
    int size;
    cout << "Enter the Size: ";
    cin >> size;
    cout << "Enter the Elements: ";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        m[x];
        // m[x]++;
    }
    int sum;
    cout << "Enter the sum: ";
    cin >> sum;
    for (int i = 0; i < m.size(); i++)
    {
        if (m[i] + m[i + 1] == sum)
        {
            cout << m[i] << " " << m[i + 1];
                }
    }
    return 0;
}