#include <bits/stdc++.h>
using namespace std;

int main()
{
     freopen("input.txt", "r", stdin);   // redirects standard input
     freopen("output.txt", "w", stdout); // redirects standard output
     int t;
     cin >> t;
     while (t--)
     {
          long int s;
          cin >> s;
          long int arr[s];
          for (int i = 0; i < s; ++i)
          {
               cin >> arr[i];
          }
           long long int total = 0;
          for (int i = 0; i < s; ++i)
          {
               int ses;
               cin >> ses;
               int crr[ses];
               for (int j = 0; j < ses; ++j)
               {
                    cin >> crr[j];
                    if (j == 0)
                    {
                         total += crr[j];
                    }
                    else
                    {
                         total += crr[j];
                         total = total - arr[i];
                    }
               }
          }
          cout << total << endl;
     }
     return 0;
}
