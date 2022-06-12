#include <bits/stdc++.h>
using namespace std;
int main()
{
     freopen("input.txt", "r", stdin);   // redirects standard input
     freopen("output.txt", "w", stdout); // redirects standard output
     int t, n, m, x, y;
     cin >> t;
     while (t--)
     {
          cin >> n >> m >> x >> y;

          while (n--)
          {
               int f(0), u(0), p(0);

               string str;
               cin >> str;
               for (int i = 0; i < str.length(); i++)
               {
                    if (str[i] == 'F')
                    {
                         f++;
                         /* code */
                    }
                    else if (str[i] == 'U')
                    {
                         u++;
                         /* code */
                    }
                    else
                    {
                         p++;
                    }
               }
               if (f >= x)
               {
                    cout << 1;
                    /* code */
               }
               else if (f == (x - 1) && p >= y)
               {
                    cout << 1;
               }
               else
               {
                    cout << 0;
               }

               /* code */

               /* code */
          }
          cout << endl;
     }
}