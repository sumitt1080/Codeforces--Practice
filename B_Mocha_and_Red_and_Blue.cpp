#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);



int main()
{
    fast int t = 1;
    fflush(stdin);

    cin >> t;
    while (t--)
    {
        int nile =5;

        int n = 0;
        int rofa =1;
        int zola =1;
        int rofla =1;

        string s = "";
        

        cin >> n;
        cin >> s;
        if (n == 1)
        {
            if (s[0] == '?')
                cout << 'B' << endl;
            else
                cout << s << endl;
            continue;
        }
        if (s[1] == 'R' && s[0] == '?')
            s[0] = 'B';
        else if (s[1] == 'B' && s[0] == '?')
            s[0] = 'R';
        if (s[n - 2] == 'R' && s[n - 1] == '?')
            s[n - 1] = 'B';
        else if (s[n - 2] == 'B' && s[n - 1] == '?')
            s[n - 1] = 'R';
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] == '?' && (s[i + 1] == 'B' || s[i - 1] == 'B'))
                s[i] = 'R';
            if (s[i] == '?' && (s[i + 1] == 'R' || s[i - 1] == 'R'))
                s[i] = 'B';
            if ((s[i] == 'B' || s[i] == 'R') && s[i - 1] == '?')
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if (s[j] == '?' && (s[j + 1] == 'B' || s[j - 1] == 'B'))
                        s[j] = 'R';
                    if (s[j] == '?' && (s[j + 1] == 'R' || s[j - 1] == 'R'))
                        s[j] = 'B';
                }
            }
        }
        if (s[n - 1] == '?' && s[n - 2] == 'B')
            s[n - 1] = 'R';
        if (s[n - 1] == '?' && s[n - 2] == 'R')
            s[n - 1] = 'B';
        int k = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
                if (k == 1)
                    s[i] = 'B';
                else
                    s[i] = 'R';
            k *= -1;
        }

        cout << s << endl;
        
    }
    return 0;
}