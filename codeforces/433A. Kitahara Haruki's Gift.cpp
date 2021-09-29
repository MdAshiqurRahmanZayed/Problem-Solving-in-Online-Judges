#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i <= n; i++)
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

int main()
{
    int n,t(0),tt,t1(0),t2(0);
    cin>>n;
    if(n==1)
    {
        cout<<"NO\n";
        return 0;
    }
    while (n--)
    {
        cin>>tt;
        t+=tt;
        if(tt==100) t1++;
        else t2++;
    }
    if ((t1 % 2 == 0 && t2 % 2 == 0) || (t1 % 2 == 0 && t2 & 1 && t1 >= 2))
        cout << "YES\n";
    else
        cout << "NO\n";
}