#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, i, j, k;
    long long d = 0, n;
    int mod = 1073741824;
    cin >> a >> b >> c;

    n = a * b * c;
    int div[n + 5];
    memset(div, 0, sizeof(div));

    for (i = 1; i <= n; i++)
        for (j = i; j <= n; j += i)
            div[j]++;

    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= b; j++)
        {
            for (k = 1; k <= c; k++)
            {
                d += div[i * j * k];
                d %= mod;
            }
        }
    }
    cout << d << endl;

    return 0;
}
