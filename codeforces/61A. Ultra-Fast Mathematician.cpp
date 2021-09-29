#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a , b ,c;
    cin>>a>>b;
    int len = a.length();

    for(int i = 0 ; i<len ;i++)
    {
        if(a[i] != b [i])
        {
            c+='1';
        }
        else
        {
            c+= '0';
        }
    }
    cout<<c;
}
