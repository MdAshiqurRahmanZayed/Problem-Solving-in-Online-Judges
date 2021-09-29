#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str[1000];
    int num[1000];
    map<string , int > map1;
    for(int i =0 ; i<n; i++)
    {
        cin>>str[i]>>num[i];
        map1[str[i]] += num[i];
    }
    int test =-1000000;
    for(int i =0 ; i<n ;i++)
    {
        test = max(map1[str[i]],test);
    }
    map<string, int> map2;
    string final;
    for (int i =0 ; i<n ; i++)
    {
        map2[str[i]] += num[i];
        if(map2[str[i]] >= test && map1[str[i]] == test)
        {
            final = str[i];
            break;
        }
    }
    cout<<final<<endl;
    
}