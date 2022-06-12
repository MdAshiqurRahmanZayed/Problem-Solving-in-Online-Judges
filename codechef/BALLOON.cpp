#include <bits/stdc++.h>
using namespace std;

int main()
{
     int t,n;
     cin>>t;
     while (t--)
     {
          cin>>n;
          int arr[n],test(0);
          for (int i = 0; i < n; i++)
          {
               cin>>arr[i];
               /* code */
          }
          for (int i = 0; i < n; i++)
          {
               if (arr[i]>=1 && arr[i]<=7)
               {
                    test++;
                    if (test==7)
                    {
                         test = i;
                         break;
                         /* code */
                    }
                    
                    /* code */
               }
               
          }
          cout<<test+1<<endl;

          /* code */
     }
     
}