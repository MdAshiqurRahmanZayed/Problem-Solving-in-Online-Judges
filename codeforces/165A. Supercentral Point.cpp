#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,final =0;
    cin>>n;
    vector<pair<int, int>> arr(n);

    for(int i = 0  ; i<n ; i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }

    for(int i = 0 ; i<n ;i++)
    {

    
        bool t1 = false,t2 = false , t3 = false ,t4 = false; 
        for (int j = 0; j < n; j++)
        {
            if(arr[i].first  == arr[j].first && arr[i].second <arr[j].second)
            {
                t1 = true;
            }
            if (arr[i].first == arr[j].first && arr[i].second > arr[j].second)
            {
                t2 = true;
            }
            if (arr[i].first > arr[j].first && arr[i].second == arr[j].second)
            {
                t3 = true;
            }
            if (arr[i].first < arr[j].first && arr[i].second == arr[j].second)
            {
                t4 = true;
            }
        }
        if(t1== true && t2 == true && t3 ==true  && t4 == true)
        {
            final++;
        }
    }
    cout<<final<<endl;
}