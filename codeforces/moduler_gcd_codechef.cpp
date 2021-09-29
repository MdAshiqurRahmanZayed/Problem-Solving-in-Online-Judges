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

lli power(lli a,lli n,lli d)
{
    int res=1;
    while (n)
    {
        if(n%2==1)
        {
            res = ((res%d)*(a%d))%d;
            n--;
        }
        else
        {
            a = ((a%d)*(a%d))%d;
            n/=2;
        }
        
        /* code */
    }
    return res;
    
}

lli gcd(lli A,lli B,lli n)
{
    if(A==B)
    {
        return (power(A, n, mod) + power(B, n, mod))%mod;
    }
    lli candite= 1;
    lli num = A-B;
    for(lli i =1; i*i <=num ; i++)
    {
        if(num%i ==0)
        {
            lli tmp = (power(A,n,i) + power(B,n,i))%i;
            if(tmp==0) candite = max(candite ,i);
            tmp = (power(A, n, num / i) + power(B, n, num / i)) % (num / i);
            if (tmp == 0)
                candite = max(candite, num/i);
        }

    }
    return candite%mod;
}


int main()
{
    lli a,b,n,t;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>n;
        cout<<gcd(a,b,n)<<ee;
        /* code */
    }
    

}