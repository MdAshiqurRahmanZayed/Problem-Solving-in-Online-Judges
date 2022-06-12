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
          int l;
          cin >> l;
          string str, str1;
          cin >> str;
          bool test = true;
          str1 = "T";
          int ans(0);
          for (int i = 0; i < str.length(); i++)
          {
               if (str[i] == '.')
               {
                    continue;
                    /* code */
               }

               else if (str[i] == 'H' && str1[0] == 'T')
               {
                    str1 = "H";
                    ans++;
                    test = true;
                    /* code */
               }
               else if (str[i] == 'T' && str1[0] == 'H')
               {
                    str1 = "T";
                    ans++;
                    test = true;
               }
               else
               {
                    test = false;
                    break;
               }

               /* code */
          }
          if (test && ans % 2 == 0)
          {
               cout << "Valid\n";
               /* code */
          }
          else
          {
               cout << "Invalid\n";
          }

          /* code */
     }
}