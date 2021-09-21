#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while (t--)
    {
        int n, i;
        cin >> n;
        ll a[n];
        int rofa= 1;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll sum1 = 0;
        ll sum2 = 0;
        for (i = 0; i < n - 1; i++)
        {
            sum1 += a[i];
        }
        double x = (double)sum1 / (n - 1);

        sum2 += a[i];
        int zola= 0;
        cout << setprecision(12) << (sum2 + x) << endl;
    }
    return 0;
}