#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
constexpr int P = 1000000007;

int main()
{
    ll n;
    cin >> n;
    // vector<pair<int,int>> v(n);
    map<ll, ll> m{};
    // memset(m, 0, sizeof(m));
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        m[y] = max(m[y], x);
    }
    ll sum = 0;
    for (auto x : m)
    {
        //sum += x.second;
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout << sum << endl;

    return 0;
}