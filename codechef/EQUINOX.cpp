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
          long long int n, a, b, sa = 0, sb = 0;
          cin >> n >> a >> b;
          string s = "EQUINOX";
          while (n--)
          {
               string s1;
               cin >> s1;
               cout << s.find(s1[0]) << endl;
               if (s.find(s1[0]) != string::npos)
               {
                    sa += a;
               }
               else
                    sb += b;
          }
          if (sa > sb)
          {
               cout << "SARTHAK" << endl;
          }
          else if (sa < sb)
          {
               cout << "ANURADHA" << endl;
          }
          else
          {
               cout << "DRAW" << endl;
          }
     }
     return 0;
}