#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s;
    bool B = true;

    cin >> s;


    for (i = 0; i < s.length();)
    {
        if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
        {
            i += 3; 
        }

        else if (s[i] == '1' && s[i + 1] == '4')
        {
            i += 2; 
        }

        else if (s[i] == '1')
        {
            i++; 
        }

        else
        {
            B = false;
            break;
        }
    }

    if(B == true)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    
}