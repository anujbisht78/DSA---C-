// Painter's Partition Problem

#include <iostream>
using namespace std;

int painter(int arr[], int size, int m, int mid)
{
    int paintersum = 0;
    int pcount = 1;
    for (int i = 0; i < size; i++)
    {
        paintersum += arr[i];
        if (paintersum > mid)
        {
            paintersum = arr[i];
            pcount++;
        }
    }
    return pcount;
}
int painterspartition(int arr[], int size, int m)
{
    int sum = 0;
    int l = 0;
    for (int i = 0; i < size; i++)
    {
        l = max(l, arr[i]);
        sum += arr[i];
    }
    int s = l;
    int e = sum;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        int paintercount = painter(arr, size, m, mid);
        if (paintercount <= m)
        {
            e = mid;
        }
        else
        {
            s = mid + 1;
        }
    }
    return s;
}
int main()
{
    int size;
    cout << "Enter the Size: ";
    cin >> size;
    int arr[size];
    cout << "Enter the Elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements Are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int m;
    cout << "Enter the No. of students: ";
    cin >> m;

    cout << "Minimum Number of Board will be allocated: " << painterspartition(arr, size, m);
    return 0;
}