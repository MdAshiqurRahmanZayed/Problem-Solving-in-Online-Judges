#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int a(0),b(0);
    cin>>str;
    int bb= str.size();
    for(int i =0 ;i<str.size() ;i++)
    {
        if(str[i] == '0')
        {
            if(a==0)
            {
                str.erase(i,1);
            }
            a++;
        }
        else
        {
            b++;
        }
    }
    
    if(b==bb)
    {
        str.erase(0,1);
        cout<<str<<endl;
        return 0;
    }
    else
    {
        cout<<str<<endl;
    }
}