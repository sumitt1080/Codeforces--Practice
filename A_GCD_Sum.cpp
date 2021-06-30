#include <bits/stdc++.h>
#include<string.h>

using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
   if (b == 0)
        return a;
   return gcd(b, a % b);
}
ll computeDigitSum(ll n) {
    ll sum = 0;
    while(n){
        sum = sum + (n%10);
        n=n/10;
    }
    return sum;
  }

ll retry(ll n)
{
   while (gcd(n, computeDigitSum(n)) == 1) {
      ++n;
    }

    return n;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll num = retry(n);
        cout<<num<<endl;
    }
}