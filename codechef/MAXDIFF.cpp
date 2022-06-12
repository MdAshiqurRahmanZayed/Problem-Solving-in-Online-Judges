#include <bits/stdc++.h>
using namespace std;
int main()
{
     freopen("input.txt", "r", stdin); // redirects standard input
     freopen("output.txt", "w", stdout);
     int t,n,k;
     cin>>t;
     while (t--)
     {
          cin>>n>>k;
          long long int arr[n];
          for (int i = 0; i < n; i++)
          {
               cin>>arr[i];
               /* code */
          }
          sort(arr,arr+n);
          long long int sum(0),sum1(0);
          for (int i = 0; i < k; i++)
          {
               sum+=arr[i];
               /* code */
          }
          for (int i = k; i < n; i++)
          {
               sum1 += arr[i];
               /* code */
          }
          cout<<sum1-sum<<endl;

          /* code */
     }
     
}