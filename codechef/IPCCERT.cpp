#include <iostream>
using namespace std;

int main()
{
     int n, m, i, k, j, ans, d = 0;
     cin >> n >> m >> k;
     int a[n][k + 1];
     for (i = 0; i < n; i++)
     {
          ans = 0;
          for (j = 0; j < k + 1; j++)
          {
               cin >> a[i][j];
               ans = ans + a[i][j];
          }
          ans = ans - a[i][k];
          if (ans >= m && a[i][k] <= 10)
          {
               d++;
          }
     }
     cout << d << endl;
     return 0;
}