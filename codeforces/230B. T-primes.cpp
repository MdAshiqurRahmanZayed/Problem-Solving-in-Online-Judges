#include <bits/stdc++.h>
using namespace std;
bool prime(long long n)
{
    if (n < 2)
        return false;
    else if (n == 2)
        return true;
    long long limit = sqrt(n);
    if (n % 2 == 0)
        return false;
    for (int j = 3; j <= limit; j += 2)
    {
        if (n % j == 0)
            return false;
    }
    return true;
}
int main()
{
    long long int n,a, i, j, final = 0, ss = 0;

    cin>>n;
    for(i = 0 ;i<n ;i++)
    {
        final = 0;
        ss = true;
        cin>>a;
        if(a==1 || a== 2)
        {
            cout<<"NO\n";
            continue;
        }
        
        final = sqrt(a);
        if(final*final == a && prime(final)==true )
        {
            cout<<"YES"<<endl;
            
        }
        
        else
        {
            cout<<"NO\n";
        }
        
    }
}

