#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, q;
    cin >> n >> q;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    while (q--)
    {
        long long int x;
        cin >> x;
        bool flag = false;
        int l = 0, r = n - 1;
        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] == x)
        //     {
        //         flag = true;
        //         break;
        //     }
        // }
        // binary search applying
        while (l <= r)
        {
            int mid_index = (l + r) / 2;
            if (a[mid_index] == x)
            {
                flag = true;
                break;
            }
            if (x > a[mid_index])
            {
                // move to right
                l = mid_index + 1;
            }
            else
            {
                // move to left
                r = mid_index - 1;
            }
        }
        if (flag == true)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
    return 0;
}