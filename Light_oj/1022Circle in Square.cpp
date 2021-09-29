#include <bits/stdc++.h>
#include <fstream>
using namespace std;
#define pi 2 * acos(0.0)
int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    double n;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        double ans;
        ans = (2 * n * 2 * n) - (pi * (n * n));
        printf("Case %d: %.2f\n", i, ans);
    }
}
