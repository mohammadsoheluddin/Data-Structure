#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initialize a Vector:
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    // Print Initial Vector Properties:
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;
    cout << "max_size: " << v.max_size() << endl;
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    // Resize the Vector:
    v.resize(20, 0);
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    // Clear the Vector:
    v.clear();
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;
    // Check if the Vector is Empty:
    cout << "Check Vector Empty: " << v.empty() << endl;
    // Resize to Original Size:
    v.resize(10, 100);
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}