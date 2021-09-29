#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,final;
    int a=0,b=0;
    cin>>str;
    int len = str.size();
    for(int i = 0 ;i<len;i++)
    {
        if(str[i] == 'W' && str[i+1] == 'U' &&str[i+2]=='B')
        {
            cout<<" ";
            i+=2;
        }
        else
        {
            cout<<str[i];
        }
        

    }
}