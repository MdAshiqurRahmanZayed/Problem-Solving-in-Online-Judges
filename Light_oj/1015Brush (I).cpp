#include <iostream>
using namespace std;
int main()
{
    int n, t, sum(0), input;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        cin >> t;
        while (t--)
        {
            cin >> input;
            if (input > 0)
            {
                sum = sum + input;
                /* code */
            }

            /* code */
        }
        printf("Case %d: %d\n", i, sum);
    }

    /* code */
}