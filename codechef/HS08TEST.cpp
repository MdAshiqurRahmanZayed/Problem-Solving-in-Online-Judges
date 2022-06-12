#include <bits/stdc++.h>
using namespace std;
int main()
{
     int a;
     float b;

     cin >> a >> b;
     if (a > b)
     {
          printf("%.2f\n", b);
          /* code */
     }
     else
     {
          if (a % 5 == 0 && a <= b-.5)
          {
               printf("%.2f\n", b - a - .5);

               /* code */
          }
          else
          {
               printf("%.2f\n", b);
          }
     }
}