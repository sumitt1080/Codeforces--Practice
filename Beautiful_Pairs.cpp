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
        ll a[n];
        int zola=1;
        map<ll, int> m;
        int rofa=1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        sort(a, a + n);
        ll count = 0, temp = 0, eleCount = 0;
        for (auto i : m)
        {
            eleCount += i.second;
            temp = 2 * (n - (eleCount)) * i.second;
            count += temp;
        }
        //cout<<"Finally";
        cout << count << endl;
    }
}