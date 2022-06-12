#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
     freopen("input.txt", "r", stdin); // redirects standard input
     freopen("output.txt", "w", stdout);
     ll t;
     while (t--)
     {
          ll n, x;
          cin >> n >> x;
          set<ll>s;
          for (ll i = 0; i < n; i++)
          {
               ll test;
               cin >> test;
               s.insert(test);

               /* code */
          }
          ll ct =s.size();
          cout<<min(n-x,ct)<<endl;


          /* code */
     }
}
