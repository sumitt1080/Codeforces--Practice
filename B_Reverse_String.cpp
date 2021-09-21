#include <bits/stdc++.h>

using namespace std;

#define ll long long
const int MAX = 256;

bool canMakeStr2(string str1, string str2)
{
   
    int count[MAX] = {0};
    for (int i = 0; i < str1.length(); i++)
        count[str1[i]]++;

    for (int i = 0; i < str2.length(); i++)
    {
        if (count[str2[i]] == 0)
            return false;
        count[str2[i]]--;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str1 ;
        cin>>str1;
        string str2 ;
        cin>>str2;
        if (canMakeStr2(str1, str2))
            cout << "Yes";
        else
            cout << "No";
    }
}