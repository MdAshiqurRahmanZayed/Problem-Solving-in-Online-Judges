#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n] ,arr2[n];
    for(int i = 0 ;i<n ;i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }
    sort(arr2,arr2+n);
    /* for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    } */
    if(arr2[0]==arr2[1])
    {
        cout << "Still Rozdil\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if(arr2[0]== arr[i])
            {
                cout<<i+1<<endl;
            }
        }
    }
    
    
}