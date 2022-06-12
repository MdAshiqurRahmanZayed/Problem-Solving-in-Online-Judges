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
          string str;
          int ans(0);
          cin>>str;
          char test = '1';
          for (int i = 0; i < str.length(); i++)
          {
               if (str[i] != test){

                    ans++;
               }
               test = str[i];
          }
          cout << ans << endl;
     }
}