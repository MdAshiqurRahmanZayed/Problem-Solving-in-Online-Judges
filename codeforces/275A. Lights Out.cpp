#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t11,t12,t13,t21,t22,t23,t31,t32,t33;
    cin>>t11>>t12>>t13>>t21>>t22>>t23>>t31>>t32>>t33;
    cout<<((t11+t12+t21) %2 ==0 ? "1":"0");
    cout<<((t12+t22+t11+t13) %2 ==0 ? "1":"0");
    cout<<((t12+t13+t23) %2 ==0 ? "1":"0");
    cout<<endl;
    cout<<((t11+t22+t31+t21) %2 ==0 ? "1":"0");
    cout<<((t12+t32+t23+t21+t22) %2 ==0 ? "1":"0");
    cout<<((t13+t22+t33+t23) %2 ==0 ? "1":"0");
    cout<<endl;
    cout<<((t31+t21+t32) %2 ==0 ? "1":"0");
    cout<<((t32+t31+t22+t33) %2 ==0 ? "1":"0");
    cout<<((t33+t23+t32) %2 ==0 ? "1":"0");
}