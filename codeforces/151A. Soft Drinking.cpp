#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np ,x,y,z;
    while (scanf("%d%d%d%d%d%d%d%d", &n, &k, &l, &c, &d, &p, &nl, &np) != EOF)
    {
        x = (k * l) / nl;
        y = c * d;
        z = p / np;
        int final1;
        int final2;
        final1 = min(x,y);
        final2 = min(final1,z);
        cout<<final2/n<<endl;
    }
    
    
}