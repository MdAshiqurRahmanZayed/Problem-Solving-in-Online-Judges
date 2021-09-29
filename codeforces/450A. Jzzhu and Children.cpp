/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,min;
    cin>>a>>b;
    int arr[a];
    map<int ,int > m;

    for(int i = 0 ; i < a ;i++)
    {
        cin>>arr[i];
        m.insert(pair<int ,int> (i,arr[i]));
    }
    min=-1;
    map<int,int >::iterator p;
    for(p = m.end() ;p!=m.begin() ;p--)
    {
        if(p->second%b != 0 && min <= p->second)
        {
            min = p->first+1;
        }   
    }
    cout<<min;
} */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, max=0,num,ss,k=0,final;
    cin >> a >> b;
    for(int i =0 ;i <a ;i++)
    {
        cin>>num;
        ss = num/b;
        if(num%b)
        {
            ss++;
        }


        if(max<=ss)
        {
            max = ss;
            final = i;

        }
    }
    cout << final + 1;
}