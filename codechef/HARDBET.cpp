#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(a, b) for (int i = a; i <= b; i++)
bool comp(int a,int b){
     return a<b;
}


int main(){
     int t,a,b,c;
     cin>>t;
     while (t--)
     {
          cin>>a>>b>>c;
          int s=min({a,b,c},comp);
          if(s==a){
               cout << "Draw"<<endl;
          }
          else if(s==b){
               cout << "Bob"<<endl;
          }
          else{
               cout<<"Alice"<<endl;
          }
          /* code */
     }
     
}