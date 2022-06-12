#include <bits/stdc++.h>
using namespace std;
int main()
{
     freopen("input.txt", "r", stdin);   // redirects standard input
     freopen("output.txt", "w", stdout); // redirects standard output
     int T;
     cin >> T;
     while (T--)
     {
          string s;
          cin >> s;
          bool l_case = false, u_case = false, digit = false, s_char = false, valid = true;
          if (s.length() < 10)
               valid = false;
          else
          {
               for (int i = 0; i < s.length(); i++)
               {
                    if (s[i] >= 'a' && s[i] <= 'z')
                         l_case = true;
                    else if (i != 0 && i != s.length() - 1)
                    {
                         if (s[i] >= 'A' && s[i] <= 'Z')
                              u_case = true;
                         else if (s[i] >= '0' && s[i] <= '9')
                              digit = true;
                         else if (s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?')
                              s_char = true;
                    }
               }
          }
          if (valid && l_case && u_case && digit && s_char)
               cout << "YES\n";
          else
               cout << "NO\n";
     }
     return 0;
}