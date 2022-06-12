#include<bits/stdc++.h>
using namespace std;
int main(){
     freopen("input.txt", "r", stdin);   // redirects standard input
     freopen("output.txt", "w", stdout); // redirects standard output
     int t,n;
     cin>>t;
     while (t--)
     {
          cin>>n;
          vector<int>vec;
          for (int i = 0; i < n; i++)
          {
               int t;
               cin >> t;
               vec.push_back(t);
          }
          
              

               /* code */
          
          sort(vec.begin(),vec.end());
          // for (int i = 0; i < n; i++)
          // {
          //      cout<< vec[i]<<" ";
          // }
          cout<<vec[0]+vec[1]<<endl;

          
          /* code */
     }
     
}