#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,arr[10001],sum = 0;
    cin>>n>>m;
    for(int i = 0 ;i< n ;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i = 0; i<m ;i++)
    {
        if(arr[i]>0)
        {
            break;
        }
        sum = sum + arr[i];
    }
cout<<-sum<<endl;
    
}