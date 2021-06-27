#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < m; j++)
            {
                if (s[j] == '.')
                {
                    arr[i][j] = -1;
                }
                else if (s[j] == 'R')
                {
                    arr[i][j] = 0;
                }
                else
                {
                    arr[i][j] = 1;
                }
            }
        }
        int ans1[n][m];
        for (int i = 0; i < n; i++)
        {
            bool f = 0;
            if (i & 1)
                f = 1;
            for (int j = 0; j < m; j++)
            {
                if (!f)
                    ans1[i][j] = 0;
                else
                    ans1[i][j] = 1;
                f = !f;
            }
        }
        int ans2[n][m];
        for (int i = 0; i < n; i++)
        {
            bool f = 1;
            if (i & 1)
                f = 0;
            for (int j = 0; j < m; j++)
            {
                if (!f)
                    ans2[i][j] = 0;
                else
                    ans2[i][j] = 1;
                f = !f;
                // cout<<ans2[i][j];
            }
            // cout<<endl;
        }
        bool ans = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] != -1 and (arr[i][j] != ans1[i][j]))
                {
                    // cout<<arr[i][j]<<" "<<ans1[i][j]<<endl;
                    ans = 0;
                    break;
                }
            }
            if (!ans)
                break;
        }
        if (ans)
        {
            cout << "Yes" << endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (ans1[i][j] == 0)
                        cout << 'R';
                    else
                        cout << 'W';
                }
                cout << endl;
            }
        }
        else
        {
            ans = 1;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (arr[i][j] != -1 and arr[i][j] != ans2[i][j])
                    {
                        ans = 0;
                        break;
                    }
                }
                if (!ans)
                    break;
            }
            if (ans)
            {
                cout << "Yes" << endl;
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        if (ans2[i][j] == 0)
                            cout << 'R';
                        else
                            cout << 'W';
                    }
                    cout << endl;
                }
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}