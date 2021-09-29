#include <bits/stdc++.h>
using namespace std;
int arr[100];
int main()
{

    int a,b, i, isPrime_a = 0,isPrime_b = 0;
    cin >> a>>b;
    for (i = 2; i <= (a / 2); ++i)
    {
        if (a % i == 0)
        {
            isPrime_a = 1;
            break;
        }
    }
    for (i = 2; i <= (b / 2); ++i)
    {
        if (b % i == 0)
        {
            isPrime_b = 1;
            break;
        }
    }
    int ff=0;
    int isPrime = 0;

    for (i = a+1; i <= b; i++)
    {
        isPrime = 0;
        // Check whether i is prime or not
        for (int j = 2; j <= i / 2; j++)
        {
            // Check If any number between 2 to i/2 divides I
            // completely If yes the i cannot be prime number
            if (i % j == 0)
            {
                isPrime = 1;
                break;
            }
        }

        if (isPrime == 0 && b != 1)
            //cout << i << " ";
            ff++;
    }
    ff--;

    
    if(isPrime_a==0 && isPrime_b ==0 && ff ==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    

    return 0;
}