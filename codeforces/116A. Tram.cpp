#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,final= 0,max=0;
    cin>>n;
    
    for(int i = 0;i <n ;i++)
    {
        cin>>a>>b;
        final = final +b-a;
        if(max<final)
        {
            max = final;
        }


    }
    cout<<max;

}