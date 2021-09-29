#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[101],final[101];
    cin>>n;
    if(n==1 || (n % 2 !=0))
    {
        cout<<"-1"<<endl;
        return 0;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            arr[i] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == i)
            {
                swap(arr[i], arr[i + 1]);
                i++;
            }
        }
    }
    
    
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i]<<" ";
    }
}