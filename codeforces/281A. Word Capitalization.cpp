#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int len = str.length();
    
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
    cout<<str;
        
    

}