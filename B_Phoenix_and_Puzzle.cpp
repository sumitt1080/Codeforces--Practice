#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPerfectSquare(ll x)
{
    if (x >= 0)
    {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2 == 0)
        {
            ll x = n / 2;
            if (isPerfectSquare(x))
            {
                cout << "YES" << endl;
                continue;
            }
            else
            {
                if (n % 4 == 0)
                {
                    ll x = n / 4;
                    if (isPerfectSquare(x))
                    {
                        cout << "YES" << endl;
                        continue;
                    }
                    else
                    {
                        cout << "NO" << endl;
                        continue;
                    }
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
        else
        {
            cout << "NO" << endl;
            continue;
        }
    }
    return 0;
}