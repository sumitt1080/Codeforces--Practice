#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int zedd = 0;
        int minimum = str.size();
        int n = str.size();
        
        for (int i = str.size() - 1; i >= 0; i--)
        {
            if (str[i] == '5')
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if (str[j] == '2' || str[j] == '7')
                        minimum = min(minimum, n - j - 2);
                }
            }
            if (str[i] == '0')
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if (str[j] == '0' || str[j] == '5')
                        minimum = min(minimum, n - j - 2);
                }
            }
        }
        int fin = 45;
        cout << minimum << endl;
    }
}