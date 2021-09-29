#include <iostream>
using namespace std;
string str;
void DecimalToBinary(int n)
{
    int binaryNumber[100], num = n;
    int i = 0;
    int test(0);
    while (n > 0)
    {
        binaryNumber[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        if(binaryNumber[j] == 1)
        {
            test++;
        }
    cout<<test<<" ";
}
int main()
{
    int n,m,a;
    cin>>n;

    
    for(int i =0 ;i<n ;i++)
    {
        cin>>m;
        int arr[m] = {0};
        for(int j = 0 ;j<m ; j++)
        {
            cin>>a;
            DecimalToBinary(a);
        }
        cout<<endl;
    }
    return 0;
}