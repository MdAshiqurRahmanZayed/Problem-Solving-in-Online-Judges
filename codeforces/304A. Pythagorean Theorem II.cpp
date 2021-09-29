#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int final = 0;
    for (int i = 1; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int k = (i * i) + (j * j);
            int d = sqrt(k);
            if (d * d == k && d <= n)
                final++;
        }
    }
    cout << final << endl;
    return 0;
}
