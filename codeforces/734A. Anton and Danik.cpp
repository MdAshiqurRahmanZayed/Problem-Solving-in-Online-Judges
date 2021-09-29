#include <bits/stdc++.h>
#include <ext/rope>

#define pb push_back
#define ll long long
#define e "\n"
#define MX 100005

#define W(t) while (t--)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define rep(i, a, b) for (ll i = a; i <= b; i++)

using namespace std;

int main()
{
    int n,A(0),D(0);
    cin>>n;
    char ch[n];

    for (int i = 0; i <n; i++)
    {

        cin>>ch[i];
        if(ch[i]=='A')
        {
            A++;
        }
        else
        {
            D++;
        }
        
        /* code */
    }
    
    if (A==D)
    {
        cout << "Friendship"<<e;
        /* code */
    }
    else if (A>D)
    {
        cout << "Anton"<<e;
        /* code */
    }
    else
    {
        cout << "Danik"<<e;
    }
    
    
}