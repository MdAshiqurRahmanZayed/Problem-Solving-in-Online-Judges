#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int a=0,b=0;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if(str[i]>='A' &&  str[i] <= 'Z') 
        {
            a++;
        }
        else
        {
            b++;
        }
        
    }
    if (a>b)
    {
        transform(str.begin(),str.end(),str.begin(), :: toupper);
        cout<<str;
        return 0;
    }
    else if(b>a)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str;
        return 0;
    }
    else
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str;
        return 0;
}