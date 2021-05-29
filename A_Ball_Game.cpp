#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, c(2);
    cin >> n;
    cout << c;
    for (int i = 2; i < n; ++i)
    {
        c += i;
        if (c > n)
        {
            c -= n;
        }
        cout << " " << c;
    }
    cout << endl;
    return 0;
}