#include <bits/stdc++.h>
using namespace std;
int main(){
     int t,a,b,x,y,k;
     cin>>t;
     while (t--)
     {
          cin>>a>>b>>x>>y>>k;
          int distance= abs(a-x)+abs(b-y);
          if (distance == k || distance%2==k%2 )
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