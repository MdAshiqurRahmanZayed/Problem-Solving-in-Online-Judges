#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,f1=0,f2=0;
    cin >> n;
    string str,final;
    vector<string> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        vec.push_back(str);
    }

    for(int i =0 ;i<n ; i++)
    {
        if(vec[0] == vec[i])
        {
            f1++;      
        }
        else
        {
            final = vec[i];
            f2++;
        }
    }

    if(f1>f2)
    {
        cout<<vec[0]<<endl;
    }
    else
    {
        cout<<final<<endl;
    }
}