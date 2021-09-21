#include <bits/stdc++.h>
#include <cmath>

using namespace std;

#define ll long long


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
            int same = 0, diff = 0;
            for (itr = m.begin(); itr != m.end(); itr++)
            {
                if (itr->second >= 2)
                {
                    same++;
                }
                if (itr->second == 1)
                {
                    diff++;
                }
            }
            if (diff == 1)
            {
                diff = 0;
            }
            //cout << samefreq << " " << difffreq << endl;
            int ans = same + (diff / 2);
            cout << ans << endl;
        }
    }
}