#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a, b;
    for (int i = 0; i < n * 2; ++i)
    {
        if (i < n)
            a.push_back(s[i] - '0');
        else
            b.push_back(s[i] - '0');
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    bool cmp = true;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] <= b[i])
            cmp = false;
    }
    if (cmp)
    {
        puts("YES");
        return 0;
    }

    cmp = true;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] >= b[i])
            cmp = false;
    }

    if (cmp)
    {
        puts("YES");
        return 0;
    }

    puts("NO");
    return 0;
}
