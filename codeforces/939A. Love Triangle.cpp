#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], flag = 0, x, y, z;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
    
        x = a[i];
        y = a[x];
        z = a[y];
        if (z == i)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}