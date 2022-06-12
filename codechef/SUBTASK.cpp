#include <bits/stdc++.h>
using namespace std;

int main()
{
     int t,n,m,k;
     cin>>t;
     while (t--)
     {
          cin>>n>>m>>k;
          int arr[n],test(0),test2(0);
          for (int i = 0; i < n; i++)
          {
               cin>>arr[i];
               if (arr[i]==1)
               {
                    
                    test2++;
                    /* code */
               }
               

               /* code */
          }
          for (int i = 0; i < n; i++)
          {
               if (arr[i] == 1)
               {

                    test++;
                    /* code */
               }
               else
               {
                    break;
               }
               

               /* code */
          }
          if (test2==n)
          {
               cout<<100<<endl;
               /* code */
          }
          else if (test>=m)
          {
               cout<<k<<endl;
               /* code */

          }
          else
          {
               cout<<0<<endl;
          }
          
          
          



          
          /* code */
     }
     
}