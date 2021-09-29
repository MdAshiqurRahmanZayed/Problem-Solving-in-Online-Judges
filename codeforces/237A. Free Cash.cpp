#include <iostream>
using namespace std;
int main()
{
    int n, time, mi, time1, mi1, test1 = 1, test2 = 1;
    scanf("%d", &n);
    scanf("%d%d", &time, &mi);
    n = n - 1;
    while (n--)
    {
        scanf("%d%d", &time1, &mi1);
        if (time == time1 && mi == mi1)
        {
            test1 += 1;
            if (test1 > test2)
            {
                test2 = test1;
            }
        }
        else
        {
            test1 = 1;
        }
        time = time1;
        mi = mi1;
    }
    printf("%d\n", test2);
    return 0;
}
