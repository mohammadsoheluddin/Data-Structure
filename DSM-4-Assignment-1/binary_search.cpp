#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int val;
    cin >> val;
    bool found = false;
    int l = 0, r = N - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (A[mid] == val)
        {
            found = true;
            break;
        }
        else if (A[mid] > val)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (found)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}