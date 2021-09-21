#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int m, n;
    cin >> n >> m;
    int front[n+1], back[n+1];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        front[a]++;
        back[b]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (front[i] == 0)
            ans++;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if (x == 3)
        {
            cout << ans << endl;
        }
        else
        {
            int a, b;
            cin >> a >> b;
            if (a > b)
                swap(a, b);
            if (x == 1)
            {
                if (front[a] == 0)
                    ans--;
                front[a] += 1;
                back[b] += 1;
            }
            else
            {
                if (front[a] == 1)
                    ans++;
                front[a] -= 1;
                back[b] -= 1;
            }
            cout << ans << endl;
        }
    }
}
