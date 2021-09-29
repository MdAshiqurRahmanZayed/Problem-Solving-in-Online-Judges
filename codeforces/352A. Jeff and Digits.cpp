#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,test,a;
    cin>>n;
    int arr[100];
    arr[0]= arr[5]= 0;
    for(int i =0 ; i<n ;++i)
    {
        cin>>a;
        ++arr[a];
        }
   

    if(arr[0] == 0)
    {
        printf("-1\n");
        return 0;
    }
  
    test = arr[5]/9;
    if(test == 0)
    {
        cout<<"0\n";
        return 0;
    }


    for(int i =0 ; i<test ;i++)
    {
        cout<<"555555555";
    }
    for(int i =0 ;i<arr[0]; i++)
    {
        cout<<"0";
    }
    cout<<endl;
    

}