#include <iostream>
using namespace std;

int main()
{
    //std::ios::sync_with_stdio(false);
    int x;
    string s1, s2;
    int a[26], wrong, right, total;
    while (cin >> x)
    {
        wrong = right = total = 0;
        for (int i = 0; i < 26; ++i)
            a[i] = 0;
        if (x == -1)
            return 0;
        cout << "Round " << x << endl;
        cin >> s1;
        cin >> s2;
        for (int i = 0; i < s1.size(); ++i)
            a[s1[i] - 'a'] = 1;
        for (int i = 0; i < 26; ++i)
            total += a[i];
        for (int i = 0; i < s2.size(); ++i)
        {
            if (a[s2[i] - 'a'])
            {
                a[s2[i] - 'a'] = 0;
                right++;
                if (right == total)
                {
                    cout << "You win.\n";
                    break;
                }
            }
            else
            {
                wrong++;
                if (wrong > 6)
                {
                    cout << "You lose.\n";
                    break;
                }
            }
        }
        if (wrong <= 6 && right < total)
        {
            cout << "You chickened out.\n";
        }
    }
    return 0;
    
}