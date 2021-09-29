#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    cin >> n;
    while (n--)
    {
        int t1(0), t2(0);
        cin >> str;
        string lower = "aeiou";
        string upper = "AEIOU";
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < str.size(); j++)
            {
                if (lower[i] == str[j])
                {
                    t1++;
                    break;
                    /* code */
                }

                /* code */
            }
            for (int j = 0; j < str.size(); j++)
            {
                if (upper[i] == str[j])
                {
                    t2++;
                    break;
                    /* code */
                }

                /* code */
            }
        }
        if (t1 == 5 || t2 == 5)
        {
            cout << "lovely string\n";
            

            /* code */
        }
        else
        {
            cout << "ugly string\n";
            
        }

        /* code */
    }
}