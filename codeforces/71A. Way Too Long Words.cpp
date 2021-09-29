#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    string str;
    cin>>n;
    while (n--)
    {
        cin>>str;
        i = str.length();
        if (i>10)
        {
            cout<<str[0]<<i-2<<str[i-1]<<endl;
            /* code */
        }
        else
        {
            cout<<str<<endl;
        }
        
         
        /* code */
    }
    
}