#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int test;
        cin>>test;
        if (test>10)
        {
            cout<<(test-10)<<" 10"<<endl;
            /* code */
        }
        else{
            cout<<"0 "<<test<<endl;
        }
        
        /* code */
    }
    
}