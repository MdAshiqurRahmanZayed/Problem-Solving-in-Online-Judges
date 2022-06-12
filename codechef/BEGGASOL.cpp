#include <bits/stdc++.h>
using namespace std;

int main()
{
     int t;
     cin >> t;
     while (t--)
     {
          int n;
          cin >> n;
          int a[n];
          for (int j = 0; j < n; j++)
          {
               cin >> a[j];
          }
          int gas = a[0];
          int distance = 0;
          for (int i = 1; i < n; i++)
          {
               if (gas > 0)
               {
                    gas = gas - 1 + a[i];
                    distance++;
               }
          }
          cout << distance + gas << endl;
     }
     return 0;
}
