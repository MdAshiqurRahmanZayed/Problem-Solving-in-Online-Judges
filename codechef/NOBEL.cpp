#include <bits/stdc++.h>
using namespace std;
int main(){
     int t,n,m,a;
     cin>>t;
     while (t--)
     {

          cin>>n>>m;
          int ans(0);
          vector<bool> taken(m, false);
          while (n--)
          {
               cin>>a;
               a--;
               taken[a]= true;
               /* code */
          }
          while (m--)
          {
               if (taken[m]==false)
               {
                    ans++;
                    
                    /* code */
               }
               
               
               /* code */
          }
          if (ans>0)
          {
               cout<<"Yes\n";
               /* code */
          }
          else
          {
               cout<<"No\n";
          }
          
          
          /* code */
     }
     
}