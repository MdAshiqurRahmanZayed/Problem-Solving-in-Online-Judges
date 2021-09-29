#include <bits/stdc++.h>
using namespace std;
int main()
{
    string broze;
    cin>>broze;
    int i;
    int len = broze.length();

    for(int i = 0 ; i < len ; i++)
    {
        if(broze[i]=='.')
            cout<<0;
        else if(broze[i+1]=='.')
            {cout<<1;
            i++;}
        else if(broze[i+1]=='-')
            {cout<<2;
            i++;}
    }
}