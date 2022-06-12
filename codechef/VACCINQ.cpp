#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t, n, p, x, y;
     cin >> t;
     while (t--)
     {
          cin >> n >> p >> x >> y;
          int ans(0);
          int a;
          for (int i = 0; i < n; i++)
          {
               cin >> a;
               if (p>0)
               {
                    if (a == 1)
                    {
                         ans += y;
                         /* code */
                    }
                    else
                    {
                         ans += x;
                         /* code */
                    }
                    p--;
               }
               

               
          }
          cout << ans  << endl;

          
     }
}