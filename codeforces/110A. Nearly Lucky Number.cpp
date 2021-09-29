#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    int len  = str.length();
    int n=0,a=0,b=0;
    for(int i = 0;i<len ;i++)
    {
        if(str[i]=='7' || str[i]== '4')
        {
            n++;
        }
        if(str[i]=='4')
        {
            a++;
        }
        if(str[i]=='7')
        {
            b++;
        }

    }

    if( n == 7 || n== 4)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else if(n==len && n>1 && len!=a && len!=b && a<b )
    {

        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
}