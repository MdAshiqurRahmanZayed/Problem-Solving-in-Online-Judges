#include <bits/stdc++.h>
using namespace std;
int main()
{
    int boy,girl;
    while(cin>>boy>>girl)
    {

    
        if(boy==girl)
        {
            for(int i =0; i<boy ; i++)
            {
                cout<<"GB";
            }
            cout<<endl;
        }
        else if(boy>girl)
        {
            for (int i = 0; i < girl; i++)
            {
                cout << "BG";
            }
            for(int i =0 ;i<boy-girl ;i++)
            {
                cout<<"B";
            }
            cout<<endl;
            /* code */
        }
        else
        {
            for (int i = 0; i < boy; i++)
            {
                cout << "GB";
            }
            for (int i = 0; i < girl-boy; i++)
            {
                cout << "G";
            }
            cout << endl;
            /* code */
        }
    }
    
}