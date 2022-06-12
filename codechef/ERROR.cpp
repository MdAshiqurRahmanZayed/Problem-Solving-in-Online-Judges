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
          cin>>str;
          string ans;
          bool test=true;
          for (int i = 0; i < str.length(); i++)
          {
               string strTest = str.substr(i,3);
               if (strTest == "010" || strTest == "101")
               {
                    ans="Good";
                    test = false;
                    break;
                    /* code */
               }
               
               
               /* code */
          }
          if (test)
          {
               cout<<"Bad\n";
               /* code */
          }
          else
          {
               cout<<ans<<endl;
          }
          
          
        
          

          
     }
}