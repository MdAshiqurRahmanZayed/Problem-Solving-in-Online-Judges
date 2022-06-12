#include <bits/stdc++.h>
using namespace std;
int main()
{
     freopen("input.txt", "r", stdin); // redirects standard input
     freopen("output.txt", "w", stdout);
     int t;
     cin >> t;
     while (t--)
     {
          int a[10], k, ans;
          for (int i = 0; i < 10; i++)
               cin >> a[i];
          cin >> k;
          for (int i = 9; i >= 0; i--)
          {
               if (a[i] >= k)
               {
                    a[i] = a[i] - k;
                    break;
               }
               else if (k > a[i])
               {
                    int x = k - a[i];
                    k -= a[i];
                    a[i] = 0;
                    continue;
               }
          }
          for (int i = 9; i >= 0; i--)
          {
               if (a[i] != 0)
               {
                    ans = i + 1;
                    break;
               }
          }
          cout << ans << endl;
     }
     return 0;
}