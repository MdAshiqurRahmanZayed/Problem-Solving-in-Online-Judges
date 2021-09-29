#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int len = str.length();
    int count =0;
    sort(str.begin(),str.end());;
    //cout<<str;
    for(int i =0 ;i<len ;i++)
    {
        if(str[i]==str[i+1])
        {
            //cout << "IGNORE HIM!\n";
            //return 0;
            continue;
        }
        count++;
    }
    if(count%2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }
    return 0;

}