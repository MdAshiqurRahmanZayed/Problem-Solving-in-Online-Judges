#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0,max(0),ma=0,min=999999,mi;
    
    cin>>n;
    int arr[n], arr1[n],arr2[n];
    for(int i = 0 ; i<  n; i++)
    {
        cin>>arr[i];
        arr1[i]=arr[i];
        if(max<arr[i])
        {
            ma = i;
            max = arr[i];
        }
        if (arr[i]<=min)
        {
            mi = i;
            min = arr[i];
        }
    }
    if(ma>mi)
    {
        mi++;
    }
    cout<<ma+(n-1)-mi;
    return 0;
}