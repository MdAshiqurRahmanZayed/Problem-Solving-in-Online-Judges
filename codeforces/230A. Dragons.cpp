#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    pair<int,int> a[10001];
    bool test = true;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);
    for (int i = 0; i < n; i++)
    {
        if(s<=a[i].first)
        {
            test = false;
            break;
        }
        else
        {
            s = s+a[i].second;
        }
        
    }
    if(test == true)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    
}