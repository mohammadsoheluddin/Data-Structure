#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {7};
    v.resize(5, 7);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}