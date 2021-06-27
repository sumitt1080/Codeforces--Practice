#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int skipped = -1;
        int sum = 0;

        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (sum + a[i] == x)
            {
                skipped = i;
                break;
            }
            else
            {
                sum += a[i];
            }
        }

        if (skipped == n - 1)
        {
            cout << "NO\n";
        }
        else if (skipped == -1)
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                if (i == skipped)
                {
                    continue;
                }
                cout << a[i] << " ";
            }
            cout << a[skipped] << "\n";
        }
    }
}