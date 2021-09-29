#include <bits/stdc++.h>
using namespace std;
int a[300];

int main()
{
    int k, i, cnt = 0, l, x, j = 0, n = 0, m;
    char s[1005], s1[1005];
    cin >> k;
    cin >> s;
    l = strlen(s);
    if (k == 1)
    {
        cout << s << endl;
        return 0;
    }
    for (i = 0; i < l; i++)
    {
        x = s[i];
        a[x]++;
        cout<<"a"<<a[x]<<x<<endl;
    }
    for (i = 97; i <= 122; i++)
    {
        if (a[i] % k != 0)
        {
            cnt++;
        }
    }
    if (cnt == 0)
    {
        for (i = 97; i <= 122; i++)
        {
            if (a[i] != 0)
            {
                m = (a[i] / k) + n;
                for (j = n; j < m; j++)
                {
                    s1[j] = i;
                }

                n = m;
            }
        }
        s1[j] = 0;
        for (i = 0; i < k; i++)
            cout << s1;
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}