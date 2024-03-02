#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << "Capacity--> " << v.capacity() << endl;
    cout << "Size--> " << v.size() << endl;

    vector<int> a(5, 1);
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    // to copy a into vector v
    vector<int> last(a);
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    v.push_back(1);
    cout << "Capacity--> " << v.capacity() << endl;
    cout << "Size--> " << v.size() << endl;

    v.push_back(2);
    cout << "Capacity--> " << v.capacity() << endl;
    cout << "Size--> " << v.size() << endl;

    v.push_back(3);
    cout << "Capacity--> " << v.capacity() << endl;
    cout << "Size--> " << v.size() << endl;

    cout << "Element at 2 Index is " << v.at(2) << endl;

    cout << "Front Element is " << v.front() << endl;
    cout << "Back Element is " << v.back() << endl;

    cout << "Befor pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before Clear Size--> " << v.size() << endl;
    v.clear();
    cout << "After Clear Size--> " << v.size() << endl;

        return 0;
}