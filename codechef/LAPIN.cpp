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
          string s;
          cin >> s;
          map<char, int> m1;
          map<char, int> m2;

          int n = s.length();
          for (int i = 0; i < n / 2; i++)
          {
               
               m1[s[i]]++;
               m2[s[n - i - 1]]++;
            
          }
          if (m1 == m2)
               cout << "YES" << endl;
          else
               cout << "NO" << endl;
     }
     // your code goes here
     return 0;
}