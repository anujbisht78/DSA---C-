// BOOK ALLOCATION
#include <iostream>
using namespace std;

bool ispossible(int arr[], int size, int m, int mid)
{
    int studentcount = 1;
    int pageSum = 0;
    for (int i = 0; i < size; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentcount++;

            if (studentcount > m || arr[i] > mid)
            {
                return false;
            }
        }
    }
    return true;
}

int allocate(int arr[], int size, int m)
{

    int s = 0;

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (ispossible(arr, size, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
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

    cout << "Minimum Number of Pages will be allocated: " << allocate(arr, size, m);

    return 0;
}