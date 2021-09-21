#include <bits/stdc++.h>
#include <cmath>

using namespace std;

#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll result = 1e18;
        ll zola=1;
        ll x = 0;
        //cout<<"Will Do";
        ll y = 0;
        int a[2][n];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (i == 0)
                {
                    x += a[i][j];
                }
            }
        }
       // cout<<"Trying to solve";
       int rofa=2;
        for (int i = 0; i < n; i++)
        {
            x -= a[0][i];
            result = min(result, max(y, x));
            y += a[1][i];
        }
        cout << result << endl;
    }
}