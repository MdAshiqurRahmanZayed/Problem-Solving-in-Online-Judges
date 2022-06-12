#include <bits/stdc++.h>
using namespace std;
int main(){
     int t,d,l,r;
     cin>>t;
     while (t--)
     {
          cin>>d>>l>>r;
          if (d>=l&&d<=r)
          {
               cout << "Take second dose now" << endl;
               /* code */
          }
          else if (d<l)
          {
               cout << "Too Early"<<endl;
               /* code */
          }
          else{
               cout << "Too Late"<<endl;
          }
          
          
          /* code */
     }
     
}