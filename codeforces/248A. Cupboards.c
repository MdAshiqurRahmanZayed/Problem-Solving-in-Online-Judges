#include<stdio.h>
int main()
{
    int n, num;
    int a, b, left=0, right=0, final1, final2;
    scanf("%d",&n);
    num = n;
    while (n--)
    {
        scanf("%d%d",&a,&b);
        left += a;
        right += b;
    }

    if (left <= num / 2)
    {
        final1 = left;
    }
    else
    {
        final1 = num - left;
    }
    if (right <= num / 2)
    {
        final2 = right;
    }
    else
    {
        final2 = num - right;
    }
    printf("%d\n",final1+final2);
}