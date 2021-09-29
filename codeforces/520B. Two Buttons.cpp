#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int k = 0;
    while (n < m)
    {
        if (m % 2 == 0)
            m = m / 2;
        else
            m = m + 1;
        k++;
    }
    cout << k + n - m << endl;
    return 0;
}