#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,num;
    int a,b,left=0,right=0,final1,final2;
    cin>>n;
    num =n;
    while (n--)
    {
        cin>>a>>b;
        left+=a;
        right+=b;
       
    }

    if(left <= num/2)
    {
        final1 = left;

    }
    else
    {
        final1 = num-left;
    }
    if(right<= num/2)
    {
        final2 = right;
    }
    else
    {
        final2 = num - right;
    }

    cout<<final1+final2<<endl;
       
}