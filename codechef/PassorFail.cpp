#include<bits/stdc++.h>
using namespace std;
int main(){
     int t,n,x,p,test;

     cin>>t;
     while (t--)
     {
          cin>>n>>x>>p;
          n=n-x;
          x=x*3;
          if (x-n>=p)
          {
               cout << "PASS"<<endl;
               /* code */
          }
          else{
               cout<<"FAIL"<<endl;
          }
          

          /* code */
     }
     
}