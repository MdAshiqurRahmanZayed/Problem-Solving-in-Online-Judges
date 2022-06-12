#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     float test,s,c, a, b;
     cin >> t;
     while (t--)
     {
          cin >> s >> a >> b >> c;
          
          test = s + ((s * c) / 100);

          if ((test) >= a && (test) <= b)
          {
               cout << "Yes" << endl;
               /* code */
          }
          else
          {
               cout << "No" << endl;
          }

          /* code */
     }
}