#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    char str[101];
    cin.getline(str, 101);

    int len = strlen(str),j=0;
    char final[len];

    for(int i = 0 ;i<len;i+=2)
    {
        final[j] = str[i];
        j++;
    }
    string fi = (string)final;
    sort(fi.begin(),fi.end());
    int n = fi.length();
    cout<<fi[0];

    for(int i=1 ; i< n;i++)
    {
        cout<<"+"<<fi[i];
    }

    return 0;

}