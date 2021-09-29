#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int a=0,b=0;
    cin>>str;
    string str_test = "hello";
    for(int i = 0 ; i<str.size(); i++)
    {
        if(str[i]==str_test[a])
        {
            a++;
            b++;
        }
        
    }
    if(b==5)
    {
        cout<<"YES\n";
    }

    else
    {
        cout<<"NO\n";
    }
    
}
