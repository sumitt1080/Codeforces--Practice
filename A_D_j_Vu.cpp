#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int f = 1;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'a')
            {
                f = 0;
                break;
            }
        }

        if (f == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";

            string s1 = s + 'a';
            string s1rev = s1;
            reverse(s1rev.begin(), s1rev.end());

            if (s1 == s1rev)
            {
                cout << 'a' + s << "\n";
            }
            else
            {
                cout << s + 'a' << "\n";
            }
        }
    }
}
