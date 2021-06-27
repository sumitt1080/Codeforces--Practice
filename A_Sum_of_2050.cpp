#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2050 == 0)
        {
            ll x = n / 2050;
            ll sum = (ll)0;
            while (x != 0)
            {
                sum += (ll)x % 10;
                x /= 10;
            }
            cout << sum << "\n";
        }
        else
        {
            cout << "-1"<<endl;
        }
    }
}