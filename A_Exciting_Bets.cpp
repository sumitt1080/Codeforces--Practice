#include <bits/stdc++.h>

using namespace std;

#define ll long long

// int gcd(int a, int b) {
//    if (a == 0 || b == 0)
//    return 0;
//    else if (a == b)
//    return a;
//    else if (a > b)
//    return gcd(a-b, b);
//    else return gcd(a, b-a);
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll mn = abs(a-b);
        // int mod1 = a % mn;
        // int mod2 = b % mn;
        if (a == b)
            cout << 0 << " " << 0 << endl;
        else if (a % mn == b % mn)
            cout << abs(a - b) << " " << min(a % mn, mn - a % mn) << endl;
        else
            cout << abs(a - b) << " " << min(a, b) << endl;
    }
}