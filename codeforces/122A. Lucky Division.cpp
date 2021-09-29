#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main()
{
    string str;
    int t1(0),t2(0);
    cin>>str;
    for(int i =0 ; i<str.size(); i++)
    {
        if(str[i] == '4')
        {
            t1++;
        }
        else if (str[i] == '7')
        {
            t2++;
            /* code */
        }
    }
    if((t1+t2)==str.size())
    {
        cout<<"YES\n";
        return 0;
    }
    else
    {
        int test = stoi(str);
        if (test % 4 == 0 || test % 7 == 0 || test % 47 == 0 || test % 74==0 || test % 44==0 || test % 77 == 0)
        {
            cout<<"YES\n";
            return 0;
        }
        else
        {
            cout<<"NO\n";
        }
    
    }
    
}