#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0;
    cin>>n;
    if(n==1 || n==2|| n==0)
    {
        cout<<n<<"\n";
        return 0;
    }
    if(n%2 == 0)
    {
        f= (n-1)*(n-2)*(n-3);
    }
    else
    {
        f= n*(n-1)*(n-2);
    }
    cout<<f;
    

}