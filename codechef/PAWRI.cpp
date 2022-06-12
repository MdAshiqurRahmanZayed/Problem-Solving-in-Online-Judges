#include <bits/stdc++.h>
using namespace std;
int main()
{
     // freopen("input.txt", "r", stdin);   // redirects standard input
     // freopen("output.txt", "w", stdout); // redirects standard output
     int t;
     cin >> t;
     
     while (t--)
     {
          string str;
          cin>>str;
          for (int i = 0; i < str.length(); i++)
          {
               string s1 = str.substr(i, 5);
               if (s1 == "party")
               {
                    str[i + 2] = 'w';
                    str[i + 3] = 'r';
                    str[i + 4] = 'i';
               }

               /* code */
          }
          cout<<str<<endl;
          

          /* code */
     }
     
}