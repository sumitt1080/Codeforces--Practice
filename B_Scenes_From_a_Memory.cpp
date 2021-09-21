#include <bits/stdc++.h>
using namespace std;

#define ll long long
set<int, greater<int>> s1;

void generate()
{
    int a = 1;
    int b = 101;
    if (a <= 2)
    {
        a = 2;
        if (b >= 2)
        {
            cout << a << " ";
            a++;
        }
    }
    if (a % 2 == 0)
        a++;

    for (i = a; i <= b; i = i + 2)
    {

        bool flag = 1;

        for (j = 2; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            s1.insert(i);
    }
}

bool isPrime(int n)
{
    if (n <= 1)  return false;
 
    
    for (int i=2; i<n; i++)
        if (n%i == 0)
            return false;
 
    return true;
}

int main()
{
    generate();
    int t;
    cin >> t;

    while (t--)
    {
        int k;
        ll int n;
        cin>>k>>n;
        ll int v = n;
        vector<int> vec;
        while(v){
            vec.push_back(v%10);
            v = v%10;
        }
        reverse(vec.begin(), vec.end());
        ll int prev = 0;

    }
    return 0;
}