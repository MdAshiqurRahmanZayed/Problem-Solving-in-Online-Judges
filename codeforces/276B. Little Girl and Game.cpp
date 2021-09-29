#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int num[27] = {0};
    for (int i = 0; i < s.size(); i++)
        num[s[i] - 'a']++;
    int k = 0;
    for (int i = 0; i < 27; i++)
        if (num[i] % 2 != 0)
            k++;
    if (k == 0 || k % 2 != 0)
        cout << "First";
    else
        cout << "Second";
    return 0;
}