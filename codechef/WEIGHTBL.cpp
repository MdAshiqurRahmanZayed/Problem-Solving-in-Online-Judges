#include <bits/stdc++.h>
using namespace std;
int main(){
     int t,w1,w2,x1,x2,m;
     cin>>t;
     while (t--)
     {
          cin>>w1>>w2>>x1>>x2>>m;
          w2 = w2-w1;
          if (w2 >= (m * x1) && w2 <= (m * x2))
          {
               cout<<1<<endl;
               /* code */
          }
          else
          {
               cout<<0<<endl;
          }
          
          

          /* code */
     }
     
}