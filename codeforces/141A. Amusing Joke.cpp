#include <bits/stdc++.h>
using namespace std;

string SORTSTRING(string &str)
{
    sort(str.begin(),str.end());
    return str;
}

int main()
{
    string str1,str2,str3,str;
    cin>>str1>>str2>>str3;
    
    str = str1+str2;
    str3 = SORTSTRING(str3);
    str = SORTSTRING(str);

    if(str.compare(str3) == 0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    




}