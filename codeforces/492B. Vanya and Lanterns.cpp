#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,l;
    scanf("%d%d",&n,&l);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        /* code */
    }
    sort(arr,arr+n);
    int mm(0);
    for (int i = 0; i < n-1; i++)
    {
        if ((arr[i+1]-arr[i])>mm)
        {
            mm=(arr[i+1]-arr[i]);
            /* code */
        }
        /* code */
    }
    double x= arr[0];
    double y= (double)mm/2;
    double test = max(x,y);
    double z =l-arr[n-1]; 
    test = max(test,z);
    printf("%.10f",test);
}