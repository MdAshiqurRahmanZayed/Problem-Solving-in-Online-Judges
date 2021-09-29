#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,f=0;
    char arr[100];
    cin>>n;
    for(i = 0; i< n ;i++)
    {
        cin>>arr[i];
        
    }
    

    for(i = 0 ;i<n ;i++)
    {
        if(arr[i] == arr[i+1])
        {
            f++;

        }
    }
    cout<<f;
}