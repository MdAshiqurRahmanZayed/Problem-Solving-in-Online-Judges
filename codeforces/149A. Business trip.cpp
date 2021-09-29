#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,sum=0,final=0;
    cin>>k;
    int arr[12];
    for (int i = 0; i < 12; i++)
    {
        cin>>arr[i];
        
        /* code */
    }
    sort(arr, arr + 12, greater<int>());
    for (int i = 0; i < 12; i++)
    {
        if(sum>=k)
        {
            break;
        }
        else
        {
            sum = sum+ arr[i];
            final++;
        }
        
        /* code */
    }
    if(sum<k)
    {
        cout<<"-1\n";
    }
    else
    {
        cout << final << endl;
        /* code */
    }
    
    
    
}