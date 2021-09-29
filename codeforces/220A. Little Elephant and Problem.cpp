#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vv1,vv2;
    int n,t;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        vv1.push_back(t); 
        vv2.push_back(t); 
    }
    int test(0);
    sort(vv1.begin(),vv1.end());
    for (int i = 0; i < n; i++)
    {
        if(vv1[i]!=vv2[i])
        {
            test++;
        }
    }
    if (test<=2)
    {
        cout<<"YES"<<endl;
        /* code */
    }
    else{
        cout<<"NO\n";
    }
}