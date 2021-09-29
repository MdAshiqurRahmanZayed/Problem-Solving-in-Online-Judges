#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans(0);
    cin >> n;
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            ans += i;
            /* code */
        }
        cout << ans << endl;
    }
    else
    {
        for (int i = 1; i <= fabs(n); i++)
        {
            ans += i;
            /* code */
        }
        cout << -(ans-1) << endl;
    }
}