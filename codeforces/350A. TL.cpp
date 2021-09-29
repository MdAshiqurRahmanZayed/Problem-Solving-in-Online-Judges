#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,m;
    cin>>n>>m;

    vector<int>vec1;
    vector<int>vec2;
    for(int i =0 ; i<n ;i++)
    {
        cin>>a;
        vec1.push_back(a);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        vec2.push_back(a);
    }
    sort(vec1.begin(),vec1.end());
    sort(vec2.begin(),vec2.end());

    int test = 2*vec1[0];
    
    int test1 = max(test,vec1[n-1]);
    int test2 = vec2[0];
    cout<<"test "<<test<<endl;
    cout<<"test1 "<<test1<<endl;
    cout<<"test2 "<<test2<<endl;
    if(test1<test2)
    {
        cout << test1 << endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }

}
    