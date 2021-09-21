#include <bits/stdc++.h>

using namespace std;

#define ll long long

// int gcd(int a, int b) {
//    if (a == 0 || b == 0)
//    return 0;
//    else if (a == b)
//    return a;
//    else if (a > b)
//    return gcd(a-b, b);
//    else return gcd(a, b-a);

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll z = 1001;
        string str;
        cin >> str;
        int n = str.length();
        char ch = 'a';
        ch = ch + n - 1;
        
        int a=1;
        int b=a;
        int m = n;
        int final = 1;
        while (n > 0)
        {
            if (str[0] == ch)
            {

                str.erase(0, 1);

                ch--;
                m--;
            }
            else if (str[m - 1] == ch)
            {
                str.erase(m - 1, m - 1);
                
                ch--;
                m--;
            }
            else
            {
                cout << "NO" << endl;
                final = 0;
                break;
            }
            n--;
        }
        int x=a;
        if (final && str.length() == 0)
        {
            cout << "YES" << endl;
        }
    }
}