#include <bits/stdc++.h>
using namespace std;


int main()
{
    string str1 , str2,t1,t2;
    int n=0;
    cin>>str1>>str2;
    if(str1.size() != str2.size())
    {
        cout<<"NO\n";
        return 0;
    }
    t1 = str1;
    t2 = str2;
    sort(t1.begin(),t1.end());
    sort(t2.begin(),t2.end());
    if(t1.compare(t2) != 0)
    {
        cout<<"NO\n";
        return 0;
    }

    for(int i =0 ; i< str1.size() ; i++)
    {
        if(str1[i] != str2[i])
        {
            n++;
        }
        if(n>2)
        {
            break;
        }
    }
    if(n>2)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }
    


    
}
