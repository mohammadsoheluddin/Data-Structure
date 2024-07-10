#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 2, 4, 2, 5, 2, 10, 2};
    // replace(v.begin(), v.end(), 2, 20);
    replace(v.begin(), v.end() - 1, 2, 20);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    vector<int> v2 = {1, 2, 3, 2, 4, 2, 5, 2, 10, 2};
    // vector<int>::iterator it;
    auto it = find(v.begin(), v.end(), 200);
    if (it == v.end())
        cout << "NOT FOUND";
    else
        cout << "FOUND";
    // cout << *it << endl;
    return 0;
}