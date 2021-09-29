#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,t25(0),t50(0),t100(0);
    cin>>n;
    bool test = true;
    for(int i =0 ; i<n ;i++)
    {
        cin>>a;
        if(i == 0 )
        {
            if(a == 50 || a== 100)
            {
                test = false;
                break;
            }

        }
        if(a == 25)
        {
            t25++;
        }
        else if (a==50)
        {
            t25--;
            t50++;
            /* code */
        }
        else
        {
            if(t50 != 0)
            {
                t50--;
                t25--;
            }
            else
            {
                t25 -= 3;
            }
            
        }
        if(t25 <0 || t50 <0)
        {
            test = false;
            break;
        }

    }
    if(test)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    
} 