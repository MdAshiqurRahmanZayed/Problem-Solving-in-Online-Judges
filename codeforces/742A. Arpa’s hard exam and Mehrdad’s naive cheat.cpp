#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define ee endl
#define N 10000
using namespace std;

lli power(lli a,lli n ,lli p)
{
    lli res =1;
    while (n)
    {
        if(n%2) 
        {
            res = (res*a)% p;
            n--;
        }
        else
        {
            a=(a*a)%p;
            n/=2;
        }
        
        /* code */
    }
    return res;
    
}


int main()
{
    int n;
    cin>>n;
    cout<<power(8,n,10);

}
