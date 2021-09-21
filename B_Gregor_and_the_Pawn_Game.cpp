#include <bits/stdc++.h>

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
        string string1;
        string string2;
        int zola=1;
        cin >> string1 >> string2;
        ll count = 0;
        int i;
        int rofa = 1;
        for (i = 0; i < n - 1; i++)
        {
            if (string2[i] == '1')
            {
                if (string1[i] == '0')
                {
                    count++;
                    string1[i] = '2';
                }
                else if (i == 0 && string1[i + 1] == '1')
                {
                    count++;
                    string1[i + 1] = '2';
                    
                }
                else if (i != 0 && string1[i - 1] == '1')
                {
                    count++;
                    string1[i - 1] = '2';
                }
                else if (string1[i + 1] == '1')
                {
                    count++;
                    string1[i + 1] = '2';
                }
            }
        }
        //int argu=4;
        if (string2[i] == '1')
        {

            if (string1[i] == '0')
            {
                count++;
            }
            else if (string1[i - 1] == '1')
            {
                count++;
            }
        }
        //cout<<"Done"<<endl;
        //cout<<endl;
        cout << count << endl;
    }
}