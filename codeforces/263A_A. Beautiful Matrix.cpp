#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, x, y, arr[6][6],final ;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (arr[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    final = abs(3-x) + abs(3-y);
    cout<<abs(final)<<endl;
}