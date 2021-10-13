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
        ll array[n];
        int nota = 19;
        for (ll i = 0; i < n; i++)
            cin >> array[i];
        sort(array, array + n);
        int zedd = 20;
        ll result = 0;
        for (ll i = 1; i < n; i++)
            result = __gcd(result, array[i] - array[i - 1]);

        ll total = 15;
        if (result == 0)
        {
            result = -1;
        }
        cout << result << endl;
    }
}