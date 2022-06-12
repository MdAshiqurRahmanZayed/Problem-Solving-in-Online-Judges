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
          string str1, str2;
          int ans(0);
          cin >> str1 >> str2;
          for (int i = 0; i < str1.length(); i++)
          {
               if (str1[i] == str2[i] || str1[i] == '?' || str2[i] == '?')
               {
                    ans++;
                    /* code */
               }
               else
               {
                    break;
               }
               

               /* code */
          }
          // cout<<ans<<" "<<str1.length()<<endl;
          if (ans == str1.length())
          {
               cout << "Yes\n";
               /* code */
          }
          else
          {
               cout << "No\n";
          }

          /* code */
     }
}