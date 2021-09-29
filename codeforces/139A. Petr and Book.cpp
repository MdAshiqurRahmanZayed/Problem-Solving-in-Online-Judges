#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,total = 0;
    cin>>n;
    int arr[n] = {0};
    for (int i = 0; i < 7; i++)
    {
        cin>>arr[i];
        total = total+ arr[i];
    }
    n %= total;
    if(n == 0 )
    {
        n= total;
    }
    for(int  i = 0 ; i<= 7 ; i++)
    {
        if(n<= 0)
        {
            cout<<i<<endl;
            break;
        }
        n = n-arr[i];
    }
    return 0;
}