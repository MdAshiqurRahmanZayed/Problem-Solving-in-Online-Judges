#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,final=0;
    string str;
    cin>>n;
    while (n--)
    {
        cin>>str;
        if(str[1] == '+')
        {
            final++;
        }
        else   
        {
            final--;
        }
        

        /* code */
    }
    cout<<final<<endl;
    
}