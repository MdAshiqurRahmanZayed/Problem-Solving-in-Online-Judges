#include <bits/stdc++.h>
using namespace std;
int main(){
     int t,n;
     cin>>t;
     while (t--)
     {
          cin>>n;
          int arr[n],ans(1),small;
          for (int i = 0; i < n; i++)
          {
               cin>>arr[i];
               /* code */
          }
          small = arr[0];
          for (int i = 0; i < n; i++)
          {
               if (arr[i]<small)
               {
                    small = arr[i];
                    ans++;
                    /* code */
               }
               
               /* code */
          }
         cout<<ans;

          

          /* code */
     }
     
}