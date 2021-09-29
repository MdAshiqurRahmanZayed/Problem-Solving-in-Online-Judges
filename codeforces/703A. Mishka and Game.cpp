#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, sum1 = 0, sum2 = 0;

    cin >> n;

    while (n--)
    {
        cin >> a >> b;
        if (a > b)
            sum1++;
        else if(b>a)
            sum2++;
    }
    if (sum2 == sum1)
        cout << "Friendship is magic!^^\n";
    else if (sum2 < sum1)
        cout << "Mishka\n";
    else
        cout << "Chris\n";

    return 0;
}
