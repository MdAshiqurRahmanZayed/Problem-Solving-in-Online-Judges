#include <bits/stdc++.h>
using namespace std;
int main()
{
     freopen("input.txt", "r", stdin); // redirects standard input
     freopen("output.txt", "w", stdout);
     int t;
     cin >> t;
     while (t--)
     {
          int n, k;
          cin >> n >> k;
          int arr[n];
          for (int i = 0; i < n; i++)
          {
               cin >> arr[i];
               /* code */
          }
          sort(arr, arr + n);
          int ans(0);
          for (int i = 0; i < n; i++)
          {
               
               if (arr[i] < 0 && k > 0)
               {

                    arr[i] *= -1;
                    k=k-1;
                    ans+=arr[i];
                    /* code */

                    /* code */
               }
               else if (arr[i]>0)
               {
                    ans += arr[i];
               }
               else
               {
                    continue;
               }

               /* code */
          }
          cout << ans<<endl;

          /* code */
     }
}