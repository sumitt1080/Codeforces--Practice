#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define rf(i, a, b) for (ll i = a; i >= b; i--)
typedef std::vector<long long> vi;
#define F first
#define S second
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
#define PB push_back
#define MP make_pair
#define PI 3.14159265358979323846
#define all(a) a.begin(), a.end()
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
const ll INF = LLONG_MAX / 2;
const ll N = 2e5 + 1;
using namespace std;
int main()
{
    fast;
    ll t = 1;
    std::cin >> t;
    while (t--)
    {
        ll n, i, j = 0;
        std::cin >> n;
        ll a[n];
        set<ll> s;
        map<ll, ll> mp;
        fr(i, 0, n)
        {
            cin >> a[i];
            s.insert(a[i]);
            mp[a[i]]++;
        }
        for (auto i : s)
        {
            cout << i << " ";
            mp[i]--;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->S == 0)
                continue;
            fr(i, 0, it->S)
                    cout
                << it->F << " ";
        }
        cout << "\n";
    }
}