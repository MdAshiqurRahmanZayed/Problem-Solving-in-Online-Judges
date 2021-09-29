#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a,count=0,final=0;
    cin>>n;

    for( i = 0 ;i< n ;i++)
    {
        cin>>a;
        count= count + a;
    }
    n++;
    for(i = 1 ;i<=5 ; i++)
    {
        if((count+i)%(n) != 1)
        {
            final++;
        }
    }
    cout<<final<<endl;
}