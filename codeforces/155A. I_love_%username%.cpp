#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,final=0;
    
    cin>>n;
    int arr[n];
    for(int i=0; i<n ;i++)
    {
        cin>>arr[i];
    }
    int max = arr[0];
    int min = arr[0];

    for (size_t i = 0; i < n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            final++;
        }
        if (arr[i]<min)
        {
            min = arr[i];
            final++;
            /* code */
        }
        
        /* code */
    }
    cout<<final<<endl;  
    
}