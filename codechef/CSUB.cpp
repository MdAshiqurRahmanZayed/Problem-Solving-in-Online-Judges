
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
// Driver Code

int main()
{
     freopen("input.txt", "r", stdin);   // redirects standard input
     freopen("output.txt", "w", stdout); // redirects standard output
     ll t;
     cin >> t;
     while (t--)
     {
          ll n;
          cin >> n;
          string s;
          cin >> s;
          ll c = 0;
          for (ll i = 0; i < n; i++)
          {
               if (s[i] == '1')
                    c++;
          }
          cout << c * (c + 1) / 2 << endl;
     }
     return 0;
}
