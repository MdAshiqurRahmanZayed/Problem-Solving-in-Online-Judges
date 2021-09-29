#include <bits/stdc++.h>

using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    for (int i = 0; i < str1.length(); i++)
        str1[i]=toupper(str1[i]);
    for (int i = 0; i < str2.length(); i++)
        str2[i] = toupper(str2[i]);
    
    for(int i =0 ;i< str1.length() ; i++)
    {
        if(str1[i] == str2[i])
        {
            continue;
        }
        else
        {
            if(str1[i]>str2[i])
            {
                cout<<"1\n";
                return 0;
            }
            else
            {
                cout<<"-1\n";
                return 0;
            }
            
        }
        
    }
    cout<<"0\n";

    
}