#include <bits/stdc++.h>
using namespace std;
int main()
{
     freopen("input.txt", "r", stdin);   // redirects standard input
     freopen("output.txt", "w", stdout); // redirects standard output
     string str;
     int t;
     cin >> str >> t;
     while (t--)
     {
          string s1;
          int x = 0;
          cin >> s1;
          for (int i = 0; i < s1.length(); i++)
          {
               int c = 0;
               for (int j = 0; j < str.length(); j++)
               {
                    if (s1[i] == str[j])
                    {
                         c++;
                         break;
                    }
               }
               if (c == 0)
               {
                    x = 1;
                    break;
               }
          }
          if (x == 1)
               cout << "No" << endl;
          else
               cout << "Yes" << endl;
     }
     return 0;
}