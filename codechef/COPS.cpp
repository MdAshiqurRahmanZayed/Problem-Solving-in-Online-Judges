
#include <bits/stdc++.h>
using namespace std;

int main()
{
     freopen("input.txt", "r", stdin);   // redirects standard input
     freopen("output.txt", "w", stdout); // redirects standard output
     int T;
     cin >> T;
     while (T--)
     {
          int m, x, y, count = 0;
          cin >> m >> x >> y;
          int a[101];
          for (int i = 0; i < m; i++)
          {
               cin >> a[i];
          }
          int d = x * y;
          for (int j = 1; j <= 100; j++)
          {
               bool check = true;
               for (int i = 0; i < m; i++)
               {
                    int lower = a[i] - d;
                    int upper = a[i] + d;
                    if (j >= lower && j <= upper)
                    {
                         check = false;
                    }
               }
               if (check == true)
                    count++;
          }
          cout << count << endl;
     }
     return 0;
}
