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

    sort(A, A + N);

    bool duplicate = false;
    for (int i = 1; i < N; i++)
    {
        if (A[i] == A[i - 1])
        {
            duplicate = true;
            break;
        }
    }

    if (duplicate)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
