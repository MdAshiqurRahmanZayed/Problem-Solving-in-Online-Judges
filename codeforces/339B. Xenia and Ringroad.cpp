#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,test(0),t1(0),t2(0);
    cin>>n>>m;
    int arr[m];
    for(int i=0 ; i<m ; i++)
    {
        cin>>arr[i];
        

    }
    long long int final = arr[0]-1;
    for (int i = 1; i < m; i++)
    {
        
        if (arr[i-1] <= arr[i])
        {
            final += arr[i] - arr[i - 1];
        }
        else
        {
            final += n - arr[i - 1] + arr[i];
        }
    }
    cout<<final<<endl;
    
}