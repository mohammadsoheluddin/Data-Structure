#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int B[N];
        for (int i = 0; i < N; i++)
        {
            B[i] = A[i];
        }
        sort(B, B + N);
        bool sorted = false;
        for (int i = 1; i < N; i++)
        {
            if (A[i] == B[i])
            {
                sorted = true;
                break;
            }
        }
        if (sorted)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
