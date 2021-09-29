#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n+2][m+2];
    for(int i =0 ; i<n ; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '.')
            {
                if((i+j) % 2 == 0 )
                {
                    cout<<"B";
                }
                else
                {
                    cout << "W";
                }
                
            }
            else
            {
                cout<<arr[i][j];
            }
            
        }
        cout<<endl;
    }
}