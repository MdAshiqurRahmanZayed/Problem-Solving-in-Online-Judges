
#include <bits/stdc++.h>
using namespace std;

int main()
{
     // your code goes here
     // freopen("input.txt", "r", stdin);   // redirects standard input
     // freopen("output.txt", "w", stdout); // redirects standard output
     // your code goes here
     int T;
     cin >> T;
     while (T--)
     {
          long long N, K, x;
          cin >> N >> K;
          long long rem = 0;

          for (int i = 0; i < N; i++)
          {
               cin >> x;
               rem += x;
          }

          cout << rem % K << endl;
     }
     return 0;
}