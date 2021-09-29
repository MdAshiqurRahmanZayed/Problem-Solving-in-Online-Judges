#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=1,k(0);
    string str;
    cin>>n>>str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]=='!')
        {
            k++;

            /* code */
        }
        

        /* code */
    }
    
    for (int i = n; i >= 1; i= i-k)
    {
        ans=ans*i;
        /* code */
    }
    cout<<ans<<endl;
    
}