#include <bits/stdc++.h>
using namespace std;
int main(){
     int t,n,x,s,r;
     cin>>t;
     while (t--)
     {
          cin>>n>>x;
          int ans(0);
          for (int i = 0; i < n; i++)
          {
               cin>>s>>r;
               if (r>=ans && s<=x)
               {
                    ans = r;
                    /* code */
               }
               
               /* code */
          }
          cout<<ans<<endl;
          ans = 0;

          
          /* code */
     }
     
}