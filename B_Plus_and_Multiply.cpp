#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        vector<ll> v;
        v.push_back(1 * a);
        v.push_back(1 + b);
        ll s = 3;
        ll flag = 0;
        for (ll i = 1; i < s; i++)
        {

            if (i&1)
            {
                v.push_back(v[i] * a);
                v.push_back(v[i] + b);
                if (v[i] * a == n || v[i] + b == n)
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                v.push_back(v[i] * a);
                v.push_back(v[i] + b);
                if (v[i] + b == n || v[i] + b == n)
                {
                    flag = 1;
                    break;
                }
            }
            if (v[i] > n)
                break;
            s = v.size();
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
