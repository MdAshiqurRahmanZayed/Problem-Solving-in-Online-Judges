/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    int j=1;
    scanf("%lld%lld", &n, &k);
    cout<<n<<k;
    long long int arr[n+1];
    for(int i = 1 ; i<=n;i+=2)
    {
       arr[j]  =  i; 
       j++;
    }
    cout<<j<<endl;
    if(j%2 ==0)
    {
        j= n/2+1;
    }
    else
    {
        j = n / 2 + 2;
    }

cout<<j<<endl;
    for (int i = 2; i <= n; i += 2)
    {
        arr[j] = i;
        j++;
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }

    //cout<<arr[k]<<endl;
} */


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k;
    scanf("%lld%lld", &n, &k);


    if (n % 2 == 0)
    {
        if (k <= n / 2)
        {
            printf("%lld\n", 2 * k - 1);
        }
        else
        {
            k = k - n / 2;
            printf("%lld\n", 2 * k);
        }
    }


    else
    {
        if (k <= (n / 2) + 1)
        {
            printf("%lld\n", 2 * k - 1);
        }
        else
        {
            k = k - (n / 2) - 1;
            printf("%lld\n", 2 * k);
        }
    }

    
    return 0;
}