#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <=m; j++)
        {
            if(((i*i)+j == n) && ((i+(j*j))==m))
            {
                count++;
            }
            /* code */
        }
        
        /* code */
    }
    if (count>0)
    {
        cout<<count<<endl;
        /* code */
    }
    else
    {
        cout<<"0\n";
    }   
}