#include <iostream>
using namespace std;
int main()
{
    string str1,str2;

    while (cin>>str1>>str2)
    {
        int a=0,b=0,test,test1(0),test2(0),t1,t2;
        float aa;
        for (int i = 0; i < str1.size(); i++)
        {
            
            if (str1[i] >= 97 && str1[i] <= 122)
            {
                str1[i] = str1[i] - 32;
            }
        }
        for (int i = 0; i < str2.length(); i++)
        {

            if (str2[i] >= 97 && str2[i] <= 122)
            {
                str2[i] = str2[i] - 32;
            }
        }
        for (int i = 0; i < str1.length(); i++)
        {
            t1 = (int)str1[i];
            test = t1-64;
            cout<<test<<" ";

            test1 = test1+test;
            test =0;
            
        }
        cout<<endl;
        for (int i = 0; i < str2.length(); i++)
        {
            test = (int)str2[i]-64;
            cout << test << " ";

            test2 = test2 +test;
            test = 0;
        }
        /* cout<<test1<<endl;
        cout<<test2<<endl;
        aa = (test1 / test2) * 100;
        cout << aa << endl; */
        /* code */
    }
        
}