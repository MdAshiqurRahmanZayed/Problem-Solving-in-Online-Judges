#include <bits/stdc++.h>
using namespace std;
int main()
{
     freopen("input.txt", "r", stdin); // redirects standard input
     freopen("output.txt", "w", stdout);
     int t,n;
     cin>>t;
     while (t--)
     {
          cin>>n;
          vector<int>vec;
          for (int i = 0; i < n; i++)
          {
               int a;
               cin>>a;
               vec.push_back(a);
               /* code */
          }
          sort(vec.begin(),vec.end());
          int test = INT_MAX;
          for (int i = 0; i < n-1; i++)
          {
               if (vec[i+1]-vec[i]<test)
               {
                    test = vec[i + 1] - vec[i];
                    /* code */
               }
               
               /* code */
          }
          cout<<test<<endl;
          
          /* code */
     }
          
}