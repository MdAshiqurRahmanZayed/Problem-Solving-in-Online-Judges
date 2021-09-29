#include <bits/stdc++.h>
#include <ext/rope>

#define pb push_back
#define ll long long
#define e endl
#define MX 100005

#define W(t) while (t--)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define rep(i, a, b) for (ll i = a; i <= b; i++)

using namespace std;
using namespace __gnu_cxx;

int main()
{
    int n,k;
    cin>>n>>k;
    while (k--)
    {
        if(n%10==0)
        {
            n/=10;
        }
        else
        {
            n--;
        }
        
        /* code */
    }
    cout<<n<<e;
    
}