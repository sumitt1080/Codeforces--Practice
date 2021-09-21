#include <bits/stdc++.h>
#include <cmath>

using namespace std;

#define ll long long

bool allCharactersSame(string s)
{
    int n = s.length();
    for (int i = 1; i < n; i++)
        if (s[i] != s[0])
            return false;

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        map<char, int> m;
        map<char, int>::iterator itr;
        cin >> s;

        if (s.length() == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            for (long i = 0; i < s.length(); i++)
            {
                m[s[i]]++;
            }
            int samefreq = 0, difffreq = 0;
            for (itr = m.begin(); itr != m.end(); itr++)
            {
                if (itr->second >= 2)
                {
                    samefreq++;
                }
                if (itr->second == 1)
                {
                    difffreq++;
                }
            }
            if (difffreq == 1)
            {
                difffreq = 0;
            }
            //cout << samefreq << " " << difffreq << endl;
            int ans = samefreq + (difffreq / 2);
            cout << ans << endl;
        }
    }
}