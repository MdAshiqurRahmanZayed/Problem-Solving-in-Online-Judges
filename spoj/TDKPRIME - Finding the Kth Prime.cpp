#include<bits/stdc++.h>
#define vi vector
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define ll long long int
using namespace std;

vi  <int> primes;
bool ar[90000001];

void sieve()
{
    int maxN = 90000000;
    ar[0] = ar[1] = true;
    for(int i = 2 ; i*i <=maxN ; i++ )
    {
        if(!ar[i])
        {
            for(int j = i* i ; j<=maxN ; j +=i)
            {
                ar[j] = true; 
            }
        }
    }

    for(int i =2 ; i<=maxN ; i++)
    {
        if(!ar[i])
        {
            primes.pb(i);
        }
    }
}

int main()
{
    int n,a;
    cin>>n;
    sieve();
    while (n--)
    {
        cin>>a;
        cout<<primes[a-1]<<endl;
        /* code */
    }
    

}

