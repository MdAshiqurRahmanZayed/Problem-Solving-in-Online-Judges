#include <bits/stdc++.h>
using namespace std;
int main(){
     int n,t,power(1),l(0),test;
     cin>>test;
     while (test--)
     {
          cin >> n;
          int answer(0);
          while (power <= n)
          {
               power *= 10;
               l++;
               /* code */
          }
          

          for (int i = 0; i < l; i++)
          {
               t = n % 10;
               n = n / 10;
               answer += t;
               /* code */
          }
          cout << answer << endl;
     }
     
     
}