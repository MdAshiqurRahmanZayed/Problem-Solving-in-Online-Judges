#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[105], i, m, p;

    while (cin >> n)
    {
        arr[0] = 0;

        for (i = 1; i <= n; i++)
            cin >> arr[i];

        vector<int> v;

        for (i = 2; i <= n; i++)
            v.push_back(abs(arr[i] - arr[i - 1]));

        v.push_back(abs(arr[n] - arr[1]));

        m = v[0], p = 0;

        for (i = 1; i < n; i++)
        {
            if (v[i] < m)
            {
                m = v[i];
                p = i;
            }
        }

        if (p == n - 1)
            printf("%d 1\n", n);
        else
            printf("%d %d\n", p + 1, p + 2);
    }

    return 0;
}