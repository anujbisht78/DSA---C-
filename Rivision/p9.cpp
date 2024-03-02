// A R R A Y S

#include <iostream>
using namespace std;
// BINARY SEARCH

// SEARCH IN A ROTATED ARRAY
int pivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int binarySearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return mid;
}
// FIND THE PIVOT IN THE ARRAY
// int pivot(int arr[], int size)
// {
//     int s = 0;
//     int e = size - 1;
//     int mid = s + (e - s) / 2;

//     while (s < e)
//     {
//         if (arr[mid] >= arr[0])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }

//         mid = s + (e - s) / 2;
//     }
//     return s;
// }

// FIND THE PEAK INDEX IN THE MOUNTAIN
// int peak(int arr[], int size)
// {
//     int s = 0;
//     int e = size - 1;
//     int mid = s + (e - s) / 2;

//     while (s < e)
//     {
//         if (arr[mid] >= arr[0])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }

//         mid = s + (e - s) / 2;
//     }
//     return s;
// }
// FIND THE FIRST AND LAST OCCURRENCE OF THE ELEMENT
// int firstOcc(int arr[], int size, int key)
// {
//     int s = 0;
//     int e = size - 1;
//     int mid = s + (e - s) / 2;
//     int ans = -1;
//     while (s <= e)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else if (arr[mid] > key)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }
// int lastOcc(int arr[], int size, int key)
// {
//     int s = 0;
//     int e = size - 1;
//     int mid = s + (e - s) / 2;
//     int ans = -1;
//     while (s <= e)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else if (arr[mid] > key)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }

// FIND THE ELEMENT USING BINARY SEARCH
// int binarySearch(int arr[], int size, int key)
// {
//     int s = 0;
//     int e = size - 1;
//     int mid = s + (e - s) / 2;
//     while (s <= e)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] > key)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return -1;
// }

// FIND THE DUPLICATE VALUE BUT INPUT FROM THE USER

// void Duplicate(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 cout << "Duplicate element is: " << arr[i];
//             }
//         }
//     }
//     // return ans;
// }

// void printArray(int arr[], int size)
// {
//     cout << "Elements are: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// FIND THE UNIQUE NUMBER AND TAKE INPUT FROM THE USER

// int Unique(int arr[], int size)
// {
//     cout << "Unique Number is: ";
//     int ans = 0;
//     for (int i = 0; i < size; i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }

// SWAP ALTERNATE ELEMENTS BY TAKING THE INPUT FROM THE USER

// void swaping(int arr[], int size)
// {
//     cout << "Elements are: ";

//     int temp;
//     for (int i = 0; i <= size; i = i + 2)
//     {
//         temp = arr[i + 1];
//         arr[i + 1] = arr[i];
//         arr[i] = temp;
//     }
//     for (int i = 0; i <= size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// void printArray(int arr[], int size)
// {
//     cout << "Elements are: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// REVERSE THE ARRAY BUT TAKE INPUT FROM THE USER

// void Reverse(int arr[], int size)
// {
//     int temp;
//     int start = 0;
//     int end = size - 1;
//     cout << "Elements are: ";
//     while (start <= end)
//     {
//         temp = arr[end];
//         arr[end] = arr[start];
//         arr[start] = temp;
//         // swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void printArray(int arr[], int size)
// {
//     cout << "Elements are: ";

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// LINEAR SEARCH FUNCTION

// void keyfound(int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             cout << "Key found at index: " << i;
//         }
//     }
// }

// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// FIND THE MAX AND MIN ELEMENT FROM THE ARRAY BUT TAKE INPUT FROM THE USER

// void Max(int arr[], int size)
// {
//     int max = INT32_MIN;
//     cout << "Maximum Element is: ";

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     cout << max;
//     cout << endl;

//     // return max;
// }
// void Min(int arr[], int size)
// {
//     int min = INT32_MAX;
//     cout << "Minimum Element is: ";
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     cout << min;
//     cout << endl;

//     // return min;
// }
// void printArray(int arr[], int size)
// {
//     cout << "Elements are: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// PLAYING ARRAYS WIH FUNCTION AND PRINT THEM BY TAKING THE INPUT FROM THE USER

// void printArray(int arr[], int size)
// {
//     cout << "Elements are: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "indexes are: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << i << " ";
//     }
// }
int main()
{
    // ACESSING THE ENTIRE ARRAY WITH ANY VALUE
    // THIS ONLU USED WITH GCC COMPILOR
    // int arr[5] = {[0..4]=3};
    // cout << arr[5];

    // ACESSING THE ARRAY WITH RANDOM LOCATION
    // int arr[15];
    // cout << arr[12];

    // PRINTING THE ARRAY
    // int arr[5] = {4, 2, 6, 4, 5};
    // cout << "Elements are: ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    //     // cout << endl;
    //     // cout << i << " ";
    // }
    // cout << endl;
    // cout << "Indexes are: ";

    // for (int i = 0; i < 5; i++)
    // {
    //     // cout << arr[i] << " ";
    //     // // cout << endl;
    //     cout << i << " ";
    // }

    // TAKING THE INPUT FROM THE USER AND THEN PRINTING IT
    // int size;
    // cout << "Enter the Size:\n";
    // cin >> size;
    // // int arr[size];
    // int arr[1000];
    // cout << "Enter the Elements: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Elements are: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // cout << "Indexes are: ";

    // for (int i = 0; i < size; i++)
    // {
    //     cout << i << " ";
    // }

    // PLAYING ARRAYS WIH FUNCTION AND PRINT THEM BY TAKING THE INPUT FROM THE USER

    // int size;
    // cout << "Enter the Size:\n";
    // cin >> size;
    // int arr[1000];
    // cout << "Enter the Elements: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    // printArray(arr, size);

    // FIND THE MAX AND MIN ELEMENT FROM THE ARRAY BUT TAKE INPUT FROM THE USER
    // int size;
    // cout << "Enter the Size\n";
    // cin >> size;
    // int arr[1000];
    // cout << "Enter the Elements: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    // printArray(arr, size);
    // cout << endl;
    // cout << "Max Element is: " << Max(arr, size) << endl;

    // cout << "Min Element is: " << Min(arr, size) << endl;
    // Max(arr, size);
    // Min(arr, size);

    // LINEAR SEARCH

    // int size;
    // cout << "Enter the Number: \n";
    // cin >> size;
    // int arr[1000];
    // cout << "Enter the Elements: \n";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    // printArray(arr, size);
    // int key;
    // cout << "Enter the Key: \n";
    // cin >> key;
    // keyfound(arr, size, key);

    // REVERSE THE ARRAY BUT TAKE INPUT FROM THE USER

    // int size;
    // cout << "Enter the Number: \n";
    // cin >> size;
    // int arr[1000];
    // cout << "Enter the Elements: \n";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Before Reversing: " << endl;
    // printArray(arr, size);
    // cout << "After Reversing: " << endl;
    // Reverse(arr, size);

    // SWAP ALTERNATE ELEMENTS BY TAKING THE INPUT FROM THE USER

    // int size;
    // cout << "Enter the number: \n";
    // cin >> size;
    // int arr[1000];
    // cout << "Enter the Elements: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Elements before Swaping: ";
    // printArray(arr, size);
    // cout << endl;
    // cout << "Elements are Swaping: ";
    // swaping(arr, size);

    // FIND THE UNIQUE NUMBER AND TAKE INPUT FROM THE USER
    // int size;
    // cout << "Enter the Size:\n";
    // cin >> size;
    // int arr[1000];
    // cout << "Enter the Elements: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Elements are: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // cout << Unique(arr, size);
    // return 0;

    // FIND THE DUPLICATE VALUE BUT INPUT FROM THE USER

    // int size;
    // cout << "Enter the Size:\n";
    // cin >> size;
    // int arr[1000];
    // cout << "Enter the Elements: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    // printArray(arr, size);
    // cout << endl;
    // Duplicate(arr, size);
    // cout << "Duplicate value is: " << Duplicate(arr, size);

    // BINARY SEARCH

    int size;
    cout << "Enter the Size: ";
    cin >> size;
    int arr[size];
    cout << "Enter the Elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int key;
    cout << "Enter the key: ";
    cin >> key;

    // FIND THE ELEMENT USING BINARY SEARCH

    // cout << "Element is found at index: " << binarySearch(arr, size, key);

    // FIND THE FIRST AND LAST OCCURRENCE OF THE ELEMENT
    // cout << "First and last Occ of the element is at index: " << firstOcc(arr, size, key) << " " << lastOcc(arr, size, key);
    // cout << endl;

    // TOTAL NUMBER OF OCCURRENCE
    // int a = firstOcc(arr, size, key);
    // int b = lastOcc(arr, size, key);
    // cout << "Total Number of Occurence: " << (b - a) + 1;

    // FIND THE PEAK INDEX IN THE MOUNTAIN
    // cout << "Peak index is: " << peak(arr, size);

    // FIND THE PIVOT INDEX IN THE MOUNTAIN
    // cout << "Pivot index is: " << pivot(arr, size);

    // SEARCH IN A ROTATED ARRAY
    int Pivot = pivot(arr, size);
    if (arr[Pivot] <= key && key <= arr[size - 1])
    {
        cout << "Element is found at index: " << binarySearch(arr, Pivot, size - 1, key);
    }
    else
    {
        cout << "Element is found at index: " << binarySearch(arr, 0, Pivot, key);
    }
    return 0;
}
