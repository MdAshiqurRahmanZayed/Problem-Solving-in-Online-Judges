#include<bits/stdc++.h>
using namespace std;

int main()
{

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int tn, cn=0;
    scanf("%d", &tn);
    while(tn--)
    {
        double ab, ac, bc, r;
        scanf("%lf%lf%lf%lf", &ab, &ac, &bc, &r);
 
        double ad = sqrt(r/(r+1))*ab;
        printf("Case %d: %lf\n", ++cn, ad);
    }
    return 0;
}