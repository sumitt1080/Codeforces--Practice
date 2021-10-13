#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll size;
        int k;
        cin >> size >> k;
        ll array[k];
        for (ll i = 0; i < k; i++)
            cin >> array[i];
        sort(array, array + k);
        int result = 0, ct = 0;
        for (int i = k - 1; i >= 0; i--)
        {
            if (result + size - array[i] <= size)
            {
                ct++;
                result += size - array[i];
            }
            else
                break;
        }
        int ans = ct;
        int position = 0;
        int stand = k - ct;
        for (int i = k - ct; i < k; i++)
        {
            if (position >= array[i])
            {
                position += size - array[stand++];
                ans--;
            }
            position += size - array[i];
        }
        cout << ans << endl;
    }
}